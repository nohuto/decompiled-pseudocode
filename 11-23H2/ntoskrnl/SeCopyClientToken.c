/*
 * XREFs of SeCopyClientToken @ 0x14071DEC0
 * Callers:
 *     SepCreateClientSecurityEx @ 0x14071DAF0 (SepCreateClientSecurityEx.c)
 *     PsImpersonateClient @ 0x140734C20 (PsImpersonateClient.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1409C9710 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1406BD140 (SepAppendAceToTokenObjectAcl.c)
 *     SepFinalizeTokenAcls @ 0x14071DFE0 (SepFinalizeTokenAcls.c)
 *     SepSetTokenTrust @ 0x14071E9C4 (SepSetTokenTrust.c)
 *     SepDuplicateToken @ 0x140729D80 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 */

__int64 __fastcall SeCopyClientToken(int a1, int a2, __int64 a3, char a4, __int64 a5, PVOID *a6)
{
  int inserted; // ebx
  PVOID v8; // rcx
  _WORD *v10; // r8
  int appended; // eax
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v13[4]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v14; // [rsp+68h] [rbp-18h]

  v13[0] = 48LL;
  Object = 0LL;
  memset(&v13[1], 0, 24);
  v14 = 0LL;
  inserted = SepDuplicateToken(a1, (unsigned int)v13, 0, 2, a2, 0, 0, (__int64)&Object);
  if ( inserted < 0 )
    goto LABEL_11;
  if ( a4 )
  {
    inserted = SepSetTokenTrust(Object, a5);
    if ( inserted < 0 )
      goto LABEL_11;
  }
  inserted = ObInsertObjectEx(Object, 0LL, 0, 0LL, 0LL);
  if ( inserted < 0 )
    goto LABEL_11;
  v8 = Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) != 0 )
  {
    v10 = (_WORD *)*((_QWORD *)Object + 98);
    if ( v10 )
    {
      appended = SepAppendAceToTokenObjectAcl((__int64)Object, 983551, v10);
      v8 = Object;
      inserted = appended;
      if ( appended < 0 )
      {
        ObfDereferenceObject(Object);
LABEL_11:
        *a6 = 0LL;
        return (unsigned int)inserted;
      }
    }
  }
  SepFinalizeTokenAcls(v8);
  *a6 = Object;
  return (unsigned int)inserted;
}
