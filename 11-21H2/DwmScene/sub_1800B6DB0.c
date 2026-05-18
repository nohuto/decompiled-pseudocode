/*
 * XREFs of sub_1800B6DB0 @ 0x1800B6DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ @ 0x18004870C (-GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ.c)
 */

char __fastcall sub_1800B6DB0(__int64 a1, Concurrency::details::UMSThreadProxy **a2)
{
  char result; // al
  Concurrency::details::UMSThreadProxy *v3; // r8
  int Id; // eax
  int v5; // edx

  result = *(_BYTE *)(*(_QWORD *)a1 + 124LL);
  if ( result == *((_BYTE *)*a2 + 124) )
  {
    Concurrency::details::UMSThreadProxy::GetId(*a2);
    Id = Concurrency::details::UMSThreadProxy::GetId(v3);
    return Id > v5;
  }
  return result;
}
