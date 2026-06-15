/*
 * XREFs of ?SetAmbRotation@CAudioStream@@QEAAJMMMM@Z @ 0x1800E5674
 * Callers:
 *     ?SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z @ 0x1800F05A0 (-SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioStream::SetAmbRotation(CAudioStream *this, float a2, float a3, float a4)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)this + 26);
  if ( !v4 )
  {
    v5 = -2147024809;
    v6 = 435LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)v5);
    return v5;
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  v5 = v8;
  if ( v8 == -2005139384 )
  {
    v5 = -2147024809;
LABEL_7:
    v6 = 445LL;
    goto LABEL_3;
  }
  if ( v8 < 0 )
    goto LABEL_7;
  return 0LL;
}
