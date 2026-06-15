/*
 * XREFs of ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x18003F100
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800034E8 (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x180040C20 (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

char *__fastcall ATL::CDacl::CAccessAce::GetACE(ATL::CDacl::CAccessAce *this)
{
  char *v1; // rdi
  size_t v3; // rbx
  char *v4; // rax
  __int64 v5; // rax
  char v6; // al
  DWORD LengthSid; // eax
  unsigned __int64 v9; // [rsp+20h] [rbp-8h]

  v1 = (char *)*((_QWORD *)this + 17);
  if ( !v1 )
  {
    v3 = (*(unsigned int (__fastcall **)(ATL::CDacl::CAccessAce *))(*(_QWORD *)this + 16LL))(this);
    v4 = (char *)malloc(v3);
    v1 = v4;
    if ( !v4 )
      ATL::AtlThrowImpl(-2147024882);
    memset_0(v4, 0, (unsigned int)v3);
    v1[1] = *((_BYTE *)this + 132);
    v5 = *(_QWORD *)this;
    *((_WORD *)v1 + 1) = v3;
    v6 = (*(__int64 (__fastcall **)(ATL::CDacl::CAccessAce *))(v5 + 24))(this);
    *((_DWORD *)v1 + 1) = *((_DWORD *)this + 32);
    *v1 = v6;
    LengthSid = GetLengthSid((char *)this + 16);
    ATL::Checked::memcpy_s(
      (ATL::Checked *)(v1 + 8),
      (void *)(v3 - 8),
      (unsigned __int64)this + 16,
      (const void *)LengthSid,
      v9);
    *((_QWORD *)this + 17) = v1;
  }
  return v1;
}
