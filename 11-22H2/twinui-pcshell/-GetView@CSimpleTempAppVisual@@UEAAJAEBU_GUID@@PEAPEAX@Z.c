/*
 * XREFs of ?GetView@CSimpleTempAppVisual@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805F5210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSimpleTempAppVisual::GetView(CSimpleTempAppVisual *this, const struct _GUID *a2, void **a3)
{
  _QWORD *v3; // rcx

  *a3 = 0LL;
  v3 = (_QWORD *)((char *)this + 24);
  if ( *v3 )
    return Microsoft::WRL::ComPtr<IObjectCollection>::CopyTo(v3);
  else
    return 2147943568LL;
}
