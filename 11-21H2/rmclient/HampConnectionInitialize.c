/*
 * XREFs of HampConnectionInitialize @ 0x180004A48
 * Callers:
 *     HampConnectionCreate @ 0x180004700 (HampConnectionCreate.c)
 * Callees:
 *     HamIpcChannelInitialize @ 0x180005C08 (HamIpcChannelInitialize.c)
 *     memset_0 @ 0x18001570E (memset_0.c)
 */

__int64 __fastcall HampConnectionInitialize(_OWORD *a1, void *a2, __int64 a3)
{
  __int64 result; // rax

  memset_0((void *)a3, 0, 0x78uLL);
  if ( a1 )
    *(_OWORD *)(a3 + 96) = *a1;
  if ( a2 == &unk_1800217A0 )
  {
    *(_DWORD *)(a3 + 112) = 0;
    return HamIpcChannelInitialize(
             &HampConnectionDeliverPayload,
             HampConnectionObjectCompareToObject,
             HampConnectionObjectCompareToMessage,
             a3 + 16);
  }
  if ( a2 == &unk_180021AB0 )
  {
    *(_DWORD *)(a3 + 112) = 2;
    return HamIpcChannelInitialize(
             &HampConnectionDeliverPayload,
             HampConnectionObjectCompareToObject,
             HampConnectionObjectCompareToMessage,
             a3 + 16);
  }
  result = (__int64)&unk_180021B40;
  if ( a2 == &unk_180021B40 )
  {
    *(_DWORD *)(a3 + 112) = 6;
  }
  else
  {
    if ( a2 == &unk_180021BA0 )
    {
      *(_DWORD *)(a3 + 112) = 1;
      return HamIpcChannelInitialize(
               &HampConnectionDeliverPayload,
               HampConnectionObjectCompareToObject,
               HampConnectionObjectCompareToMessage,
               a3 + 16);
    }
    if ( a2 == &unk_180021C60 )
    {
      *(_DWORD *)(a3 + 112) = 3;
      return HamIpcChannelInitialize(
               &HampConnectionDeliverPayload,
               HampConnectionObjectCompareToObject,
               HampConnectionObjectCompareToMessage,
               a3 + 16);
    }
    result = (__int64)&unk_180021C00;
    if ( a2 == &unk_180021C00 )
    {
      *(_DWORD *)(a3 + 112) = 4;
    }
    else
    {
      result = 7LL;
      if ( a2 == &unk_180021CF0 )
        result = 5LL;
      *(_DWORD *)(a3 + 112) = result;
    }
  }
  return result;
}
