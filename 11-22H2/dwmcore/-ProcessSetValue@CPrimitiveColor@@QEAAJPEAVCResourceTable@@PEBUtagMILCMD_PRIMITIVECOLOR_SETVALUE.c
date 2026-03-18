/*
 * XREFs of ?ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVECOLOR_SETVALUE@@@Z @ 0x180247E5C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveColor::ProcessSetValue(
        CPrimitiveColor *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVECOLOR_SETVALUE *a3)
{
  __int64 v3; // rax

  if ( *((float *)this + 16) != *((float *)a3 + 2)
    || *((float *)this + 17) != *((float *)a3 + 3)
    || *((float *)this + 18) != *((float *)a3 + 4)
    || *((float *)this + 19) != *((float *)a3 + 5) )
  {
    v3 = *(_QWORD *)this;
    *((_OWORD *)this + 4) = *(_OWORD *)((char *)a3 + 8);
    (*(void (__fastcall **)(CPrimitiveColor *, _QWORD, _QWORD))(v3 + 72))(this, 0LL, 0LL);
  }
  return 0LL;
}
