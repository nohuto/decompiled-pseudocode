/*
 * XREFs of ?NotifyFromEnvironment_ChangeValues_Callback@CompositionIsland@Composition@UI@Windows@@QEAAXUfloat3@Numerics@Foundation@4@MM@Z @ 0x180112E48
 * Callers:
 *     _lambda_351d718ce7c9cc2194c2d1b1baf93fda_::operator() @ 0x180113EB8 (_lambda_351d718ce7c9cc2194c2d1b1baf93fda_--operator().c)
 * Callees:
 *     ??9Numerics@Foundation@Windows@@YA_NAEBUfloat3@012@0@Z @ 0x180011FB4 (--9Numerics@Foundation@Windows@@YA_NAEBUfloat3@012@0@Z.c)
 *     ?NotifyTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ @ 0x18006B4DC (-NotifyTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionIsland::NotifyFromEnvironment_ChangeValues_Callback(
        __int64 a1,
        float *a2,
        float a3,
        float a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  float *v6; // r8
  int v7; // eax

  if ( !*(_BYTE *)(a1 + 188)
    && (Windows::Foundation::Numerics::operator!=((float *)(a1 + 304), a2) || v6[79] != a3 || v6[74] != a4) )
  {
    v7 = *(_DWORD *)(v4 + 8);
    *(_QWORD *)v5 = *(_QWORD *)v4;
    *(_DWORD *)(v5 + 8) = v7;
    v6[79] = a3;
    v6[74] = a4;
    Windows::UI::Composition::CompositionIsland::NotifyTransformChanged_Callback((Windows::UI::Composition::CompositionIsland *)v6);
  }
}
