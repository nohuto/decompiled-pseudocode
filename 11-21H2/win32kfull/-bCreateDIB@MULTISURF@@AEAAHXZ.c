/*
 * XREFs of ?bCreateDIB@MULTISURF@@AEAAHXZ @ 0x1C02A4330
 * Callers:
 *     ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z @ 0x1C02A457C (-bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MULTISURF::bCreateDIB(MULTISURF *this)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  int v4; // eax
  __int64 *v5; // rax
  unsigned int v6; // edi
  void (__fastcall *v7)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *); // rax
  _DWORD *v8; // rcx
  _DWORD v10[4]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v11; // [rsp+78h] [rbp+7h]
  int v12; // [rsp+80h] [rbp+Fh]
  int v13; // [rsp+84h] [rbp+13h]
  __int64 v14; // [rsp+88h] [rbp+17h] BYREF
  int v15; // [rsp+90h] [rbp+1Fh]
  int v16; // [rsp+94h] [rbp+23h]
  __int64 v17; // [rsp+98h] [rbp+27h] BYREF
  int v18; // [rsp+A0h] [rbp+2Fh]
  int v19; // [rsp+A4h] [rbp+33h]

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  v4 = *(_DWORD *)(*(_QWORD *)this + 56LL);
  v16 = *(_DWORD *)(*(_QWORD *)this + 60LL);
  v14 = 0LL;
  v15 = v4;
  ERECTL::operator*=((int *)&v14, (int *)this + 2);
  v18 = v15 - v14;
  v17 = 0LL;
  v19 = v16 - HIDWORD(v14);
  v10[3] = 0;
  v13 = 0;
  v10[0] = *(_DWORD *)(v1 + 96);
  v10[1] = v15 - v14;
  v10[2] = v16 - HIDWORD(v14);
  v5 = *(__int64 **)(v1 + 128);
  if ( v5 )
    v11 = *v5;
  else
    v11 = 0LL;
  v6 = 1;
  v12 = 1;
  if ( SURFMEM::bCreateDIB(
         (MULTISURF *)((char *)this + 40),
         (struct _DEVBITMAPINFO *)v10,
         0LL,
         0LL,
         0,
         0LL,
         0LL,
         0,
         1,
         0,
         0)
    && (v7 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *))(v3 + 2816)) != 0LL )
  {
    v7(
      (*((_QWORD *)this + 5) + 24LL) & -(__int64)(*((_QWORD *)this + 5) != 0LL),
      *(_QWORD *)this + 24LL,
      0LL,
      0LL,
      &v17,
      &v14);
    v8 = (_DWORD *)*((_QWORD *)this + 12);
    *((_DWORD *)this + 14) = *v8 - v14;
    *((_DWORD *)this + 15) = v8[1] - HIDWORD(v14);
    *((_DWORD *)this + 16) = v8[2] - v14;
    *((_DWORD *)this + 17) = v8[3] - HIDWORD(v14);
  }
  else
  {
    return 0;
  }
  return v6;
}
