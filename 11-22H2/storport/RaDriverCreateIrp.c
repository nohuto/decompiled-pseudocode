/*
 * XREFs of RaDriverCreateIrp @ 0x1C00A0010
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitCreateIrp @ 0x1C000F4F8 (RaUnitCreateIrp.c)
 *     RaidHandleCreateCloseIrp @ 0x1C000F510 (RaidHandleCreateCloseIrp.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaDriverCreateIrp(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  unsigned int Irp; // eax
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xCu,
      (__int64)&WPP_aebdecc26ac03ea54f5217517cc0f841_Traceguids,
      a1,
      a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(_DWORD **)(a1 + 64);
  if ( *v4 == 1431193940 )
  {
    Irp = RaUnitCreateIrp(*(_QWORD *)(a1 + 64));
  }
  else
  {
    if ( *v4 != 1094997074 )
    {
      v6 = -1073741823;
      goto LABEL_6;
    }
    Irp = RaidHandleCreateCloseIrp(v4[22], (IRP *)a2);
  }
  v6 = Irp;
LABEL_6:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    v8 = v6;
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xDu,
      (__int64)&WPP_aebdecc26ac03ea54f5217517cc0f841_Traceguids,
      a1,
      a2,
      v8);
  }
  return v6;
}
