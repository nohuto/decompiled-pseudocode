/*
 * XREFs of ?GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ @ 0x18003F1F0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800034E8 (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x180040C20 (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

char *__fastcall ATL::CDacl::CAccessObjectAce::GetACE(ATL::CDacl::CAccessObjectAce *this)
{
  char *v1; // rdi
  size_t v3; // rbx
  char *v4; // rax
  __int64 v5; // rax
  char v6; // al
  __int128 *v7; // rdx
  ATL::Checked *v8; // rbp
  int v9; // ecx
  __int128 v10; // xmm0
  __int128 *v11; // rax
  __int128 v12; // xmm0
  DWORD LengthSid; // eax
  unsigned __int64 v15; // [rsp+20h] [rbp-8h]

  v1 = (char *)*((_QWORD *)this + 17);
  if ( !v1 )
  {
    v3 = (*(unsigned int (__fastcall **)(ATL::CDacl::CAccessObjectAce *))(*(_QWORD *)this + 16LL))(this);
    v4 = (char *)malloc(v3);
    v1 = v4;
    if ( !v4 )
      ATL::AtlThrowImpl(-2147024882);
    memset_0(v4, 0, (unsigned int)v3);
    v1[1] = *((_BYTE *)this + 132);
    v5 = *(_QWORD *)this;
    *((_WORD *)v1 + 1) = v3;
    v6 = (*(__int64 (__fastcall **)(ATL::CDacl::CAccessObjectAce *))(v5 + 24))(this);
    v7 = (__int128 *)*((_QWORD *)this + 19);
    v8 = (ATL::Checked *)(v1 + 44);
    *((_DWORD *)v1 + 2) = 0;
    *v1 = v6;
    *((_DWORD *)v1 + 1) = *((_DWORD *)this + 32);
    if ( v7 )
    {
      v10 = *v7;
      *((_DWORD *)v1 + 2) = 1;
      v9 = 3;
      *(_OWORD *)(v1 + 12) = v10;
    }
    else
    {
      v8 = (ATL::Checked *)(v1 + 28);
      v9 = 2;
    }
    v11 = (__int128 *)*((_QWORD *)this + 20);
    if ( v11 )
    {
      v12 = *v11;
      if ( v7 )
        *(_OWORD *)(v1 + 28) = v12;
      else
        *(_OWORD *)(v1 + 12) = v12;
      *((_DWORD *)v1 + 2) = v9;
    }
    else
    {
      v8 = (ATL::Checked *)((char *)v8 - 16);
    }
    LengthSid = GetLengthSid((char *)this + 16);
    ATL::Checked::memcpy_s(
      v8,
      (void *)(v8 - (ATL::Checked *)v1),
      (unsigned __int64)this + 16,
      (const void *)LengthSid,
      v15);
    *((_QWORD *)this + 17) = v1;
  }
  return v1;
}
