/*
 * XREFs of SepSddlAddAceToAcl @ 0x1C00B08F4
 * Callers:
 *     SepSddlGetAclForString @ 0x1C00B0AE0 (SepSddlGetAclForString.c)
 * Callees:
 *     memset @ 0x1C000AC00 (memset.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 */

NTSTATUS __fastcall SepSddlAddAceToAcl(
        _ACL **Acl,
        unsigned int *TrueAclSize,
        unsigned int AccessMask,
        unsigned int RemainingAces,
        ACCESS_MASK SidPtr,
        unsigned int Acl_0,
        void *TrueAclSize_0)
{
  _ACL *v7; // rsi
  size_t v10; // rbp
  ULONG v11; // ebx
  unsigned int v12; // r15d
  unsigned int v13; // ebx
  _ACL *PoolWithTag; // rax
  _ACL *v15; // rdi

  v7 = *Acl;
  v10 = *TrueAclSize;
  v11 = RtlLengthSid(TrueAclSize_0) + 8;
  v12 = v11 + v10;
  if ( v11 + (unsigned int)v10 > v7->AclSize )
  {
    v13 = v10 + Acl_0 * v11;
    PoolWithTag = (_ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x6C416553u);
    v15 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    memset(PoolWithTag, 0, v13);
    memmove(v15, *Acl, v10);
    v15->AclSize = v13;
    ExFreePoolWithTag(v7, 0);
    *Acl = v15;
    v7 = v15;
  }
  *TrueAclSize = v12;
  return RtlAddAccessAllowedAce(v7, 2u, SidPtr, TrueAclSize_0);
}
