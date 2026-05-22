/*
 * XREFs of ?HandleSurfaceHidden@CBitmapInfoFront@DirectComposition@@UEAAJXZ @ 0x18007EE80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CBitmapInfoFront::HandleSurfaceHidden(DirectComposition::CBitmapInfoFront *this)
{
  int v1; // ebp
  __int64 *v2; // rdi
  __int64 i; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  char *v7; // rdi
  int v8; // ecx
  __int64 j; // rbx
  void (__fastcall ***v10)(_QWORD, char *, _QWORD); // rcx

  v1 = 0;
  v2 = (__int64 *)((char *)this + 128);
  for ( i = 0LL; i < 3; ++i )
  {
    v5 = *v2;
    if ( !*v2 )
      break;
    if ( *(DirectComposition::CBitmapInfoFront **)(v5 + 96) == this )
      *(_QWORD *)(v5 + 96) = 0LL;
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v5);
    *v2 = 0LL;
    v2 += 3;
  }
  v6 = *((_QWORD *)this + 4);
  if ( !v6 || (v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6), v1 >= 0) )
  {
    *((_BYTE *)this + 112) &= ~1u;
    v7 = (char *)this + 56;
    v8 = *((_DWORD *)this + 22) - 1;
    for ( j = v8; j >= 0; --j )
    {
      v10 = *(void (__fastcall ****)(_QWORD, char *, _QWORD))(*((_QWORD *)v7 + 1) + 8 * j);
      (**v10)(v10, v7, 0LL);
    }
  }
  return (unsigned int)v1;
}
