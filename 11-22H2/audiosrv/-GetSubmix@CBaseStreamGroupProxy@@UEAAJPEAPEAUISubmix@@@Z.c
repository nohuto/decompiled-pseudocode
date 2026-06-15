/*
 * XREFs of ?GetSubmix@CBaseStreamGroupProxy@@UEAAJPEAPEAUISubmix@@@Z @ 0x1800828C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::GetSubmix(CBaseStreamGroupProxy *this, struct ISubmix **a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, struct ISubmix **); // rdi
  __int64 (__fastcall *v4)(_QWORD, GUID *, struct ISubmix **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  struct ISubmix *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ISubmix *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct ISubmix **))*((_QWORD *)this + 10);
  v4 = **v3;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v10);
  v5 = v4(v3, &GUID_09874cb6_a367_4918_b747_2b660bde30d1, &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = v10;
    if ( v10 )
    {
      (*(void (__fastcall **)(struct ISubmix *))(*(_QWORD *)v10 + 8LL))(v10);
      v7 = v10;
    }
    *a2 = v7;
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x320,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v10);
  return v6;
}
