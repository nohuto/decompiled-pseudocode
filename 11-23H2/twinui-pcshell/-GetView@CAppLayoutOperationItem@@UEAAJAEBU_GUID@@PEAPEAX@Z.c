/*
 * XREFs of ?GetView@CAppLayoutOperationItem@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180798D20
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTo@?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1801177C8 (-CopyTo@-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CAppLayoutOperationItem::GetView(CAppLayoutOperationItem *this, const struct _GUID *a2, void **a3)
{
  _QWORD *v3; // rcx
  __int64 result; // rax

  *a3 = 0LL;
  v3 = (_QWORD *)((char *)this + 16);
  result = 2147943568LL;
  if ( *v3 )
    return Microsoft::WRL::ComPtr<IObjectCollection>::CopyTo(v3);
  return result;
}
