/*
 * XREFs of sub_1C0012644 @ 0x1C0012644
 * Callers:
 *     sub_1C001209C @ 0x1C001209C (sub_1C001209C.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00071D4 @ 0x1C00071D4 (sub_1C00071D4.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C00130BC @ 0x1C00130BC (sub_1C00130BC.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 */

__int64 __fastcall sub_1C0012644(__int64 a1, IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 LowPart; // rax
  ULONG EaLength; // edx
  POWER_STATE v8; // ebx
  bool v9; // cl
  REQUEST_POWER_COMPLETE *v10; // rsi
  void *Context; // r14
  NTSTATUS v12; // eax
  unsigned int v13; // r14d
  signed int v14; // esi

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  v8.SystemState = (SYSTEM_POWER_STATE)stru_1C0084418[LowPart];
  v9 = (_DWORD)LowPart != 1 && *(_DWORD *)(a1 + 488) < (int)LowPart;
  *(_BYTE *)(a1 + 500) = v9;
  *(_DWORD *)(a1 + 488) = LowPart;
  *(_DWORD *)(a1 + 496) = EaLength;
  if ( v9 )
  {
    if ( (_DWORD)LowPart == 5 )
      sub_1C00130BC(a1);
    v10 = CompletionFunction;
    Context = a2;
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  else
  {
    v10 = (REQUEST_POWER_COMPLETE *)sub_1C00103B0;
    Context = (void *)a1;
  }
  LOBYTE(a3) = 1;
  sub_1C00071D4(a1, (__int64)a2, a3);
  v12 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 8), 2u, v8, v10, Context, 0LL);
  v13 = 259;
  v14 = v12;
  if ( v12 == 259 )
  {
    if ( v8.SystemState == PowerSystemWorking )
      *(_BYTE *)(a1 + 448) |= 0x80u;
    else
      *(_BYTE *)(a1 + 449) |= 1u;
    v14 = 0;
  }
  if ( !*(_BYTE *)(a1 + 500) || v14 < 0 )
  {
    sub_1C000729C(a1);
    v13 = sub_1C0003440(a2, 0, v14);
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 58LL, &unk_1C008A080, a1, a2, v13);
  }
  return v13;
}
