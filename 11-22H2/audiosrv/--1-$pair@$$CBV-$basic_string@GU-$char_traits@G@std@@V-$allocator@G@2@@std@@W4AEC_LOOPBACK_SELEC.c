/*
 * XREFs of ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@QEAA@XZ @ 0x1800554C0
 * Callers:
 *     __dynamic_initializer_for__AECLoopbackSelectionModeStringValues___::_1_::dtor$0 @ 0x1800014F2 (__dynamic_initializer_for__AECLoopbackSelectionModeStringValues___--_1_--dtor$0.c)
 *     __dynamic_initializer_for__AECLoopbackSelectionModeStringValues___::_1_::dtor$1 @ 0x1800014FE (__dynamic_initializer_for__AECLoopbackSelectionModeStringValues___--_1_--dtor$1.c)
 *     __dynamic_initializer_for__AECLoopbackSelectionModeStringValues___::_1_::dtor$2 @ 0x18000150A (__dynamic_initializer_for__AECLoopbackSelectionModeStringValues___--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2D00 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>::~pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>(
        void **a1)
{
  unsigned __int64 v1; // rdx
  void *v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = (unsigned __int64)a1[3];
  if ( v1 >= 8 )
  {
    v3 = *a1;
    v4 = 2 * v1 + 2;
    v5 = v4;
    v6 = v3;
    if ( v4 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v6, &v5);
      v4 = v5;
      v3 = v6;
    }
    operator delete(v3, v4);
  }
  a1[3] = (void *)7;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
}
