/*
 * XREFs of ?HrFindInterface@CCompositionTexture@DirectComposition@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A0070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionTexture::HrFindInterface(
        DirectComposition::CCompositionTexture *this,
        const struct _GUID *a2,
        void **a3)
{
  if ( !a3 )
    return 2147942487LL;
  if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_929bb1aa_725f_433b_abd7_273075a835f2.Data1
    || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_929bb1aa_725f_433b_abd7_273075a835f2.Data4 )
  {
    return 2147500034LL;
  }
  *a3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
  return 0LL;
}
