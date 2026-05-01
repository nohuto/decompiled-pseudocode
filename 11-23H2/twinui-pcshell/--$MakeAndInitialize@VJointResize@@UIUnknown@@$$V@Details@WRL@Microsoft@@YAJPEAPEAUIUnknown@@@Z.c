/*
 * XREFs of ??$MakeAndInitialize@VJointResize@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18010A16C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VJointResize@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18010A0F0 (-CreateInstance@-$SimpleClassFactory@VJointResize@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_G.c)
 * Callees:
 *     ??0JointResize@@QEAA@XZ @ 0x18010A234 (--0JointResize@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@JointResize@@QEAAJXZ @ 0x18010A434 (-RuntimeClassInitialize@JointResize@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<JointResize,IUnknown,>(_QWORD *a1)
{
  JointResize *v2; // rax
  JointResize *v3; // rdi
  int v4; // esi

  *a1 = 0LL;
  v2 = (JointResize *)operator new(0x318uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = JointResize::JointResize(v2);
    v4 = JointResize::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(JointResize *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(JointResize *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
