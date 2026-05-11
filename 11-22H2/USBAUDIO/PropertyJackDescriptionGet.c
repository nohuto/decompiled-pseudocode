/*
 * XREFs of PropertyJackDescriptionGet @ 0x1C002F8E0
 * Callers:
 *     <none>
 * Callees:
 *     CheckBridgePin @ 0x1C002E2D4 (CheckBridgePin.c)
 */

__int64 __fastcall PropertyJackDescriptionGet(IRP *a1, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Options; // ebx
  unsigned int Length; // ebp
  PKSFILTER FilterFromIrp; // rcx
  __int64 result; // rax
  __int64 v11; // r10
  int v12; // r11d
  bool v13; // [rsp+40h] [rbp+8h] BYREF

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  v13 = 0;
  if ( Options < 0x20 )
    return 3221225488LL;
  if ( (*(_DWORD *)(a2 + 20) & 1) == 0 )
    return 3221225659LL;
  result = CheckBridgePin((__int64)FilterFromIrp, *(_DWORD *)(a2 + 24), &v13);
  if ( (int)result >= 0 )
  {
    if ( v13 == (_BYTE)v11 )
      return 3221225659LL;
    if ( Length )
    {
      if ( Length >= 0x24 )
      {
        *(_DWORD *)a3 = 36;
        *(_DWORD *)(a3 + 4) = v12;
        if ( a3 == -8 )
          return 3221225485LL;
        *(_QWORD *)(a3 + 8) = v11;
        *(_DWORD *)(a3 + 24) = 3;
        *(_DWORD *)(a3 + 28) = 3;
        *(_DWORD *)(a3 + 16) = v11;
        *(_DWORD *)(a3 + 20) = 14;
        *(_DWORD *)(a3 + 32) = v12;
        result = (unsigned int)v11;
      }
      else
      {
        result = 3221225507LL;
      }
    }
    else
    {
      result = 2147483653LL;
    }
    a1->IoStatus.Information = 36LL;
  }
  return result;
}
