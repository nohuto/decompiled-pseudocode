/*
 * XREFs of sub_1403A3C90 @ 0x1403A3C90
 * Callers:
 *     PoRequestPowerIrp @ 0x1403A3C60 (PoRequestPowerIrp.c)
 *     sub_1403B4E2C @ 0x1403B4E2C (sub_1403B4E2C.c)
 *     sub_14061A090 @ 0x14061A090 (sub_14061A090.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14038BF18 @ 0x14038BF18 (sub_14038BF18.c)
 *     sub_1403A3F0C @ 0x1403A3F0C (sub_1403A3F0C.c)
 *     sub_1403A4264 @ 0x1403A4264 (sub_1403A4264.c)
 *     sub_1403A4500 @ 0x1403A4500 (sub_1403A4500.c)
 *     sub_1403B1230 @ 0x1403B1230 (sub_1403B1230.c)
 *     sub_1403B1794 @ 0x1403B1794 (sub_1403B1794.c)
 *     sub_1403B51A0 @ 0x1403B51A0 (sub_1403B51A0.c)
 *     sub_1403B5A24 @ 0x1403B5A24 (sub_1403B5A24.c)
 *     sub_1405D6E84 @ 0x1405D6E84 (sub_1405D6E84.c)
 */

__int64 __fastcall sub_1403A3C90(__int64 a1, char a2, ULONG a3, int a4, __int64 a5, char a6, PIRP Irp)
{
  volatile __int64 *p_Type; // rbp
  ULONG v8; // ebx
  __int64 result; // rax
  char v12; // cl
  IRP *v13; // rdi
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 **v14; // rsi
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *p_CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v17; // rbp
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *v18; // rdx
  signed __int32 PacketType; // eax
  signed __int32 v20; // ett
  __int64 v21; // rcx
  char v22; // al
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *v23; // rcx
  __int64 v24; // [rsp+60h] [rbp-28h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v24 = 0LL;
  p_Type = (volatile __int64 *)&Irp->Type;
  v8 = a3;
  if ( Irp )
    _InterlockedExchange64((volatile __int64 *)&Irp->Type, 0LL);
  Irp = 0LL;
  if ( !a2 )
    goto LABEL_8;
  if ( (unsigned __int8)(a2 - 2) > 1u )
    return 3221225712LL;
  if ( (_BYTE)xmmword_140C22740 )
    v12 = 1;
  else
LABEL_8:
    v12 = 0;
  LOBYTE(a3) = a2;
  result = sub_1403A3F0C(a1, a2, a3, a2 != 0, v8, v12, a6, a4, a5, (__int64)&Irp, (__int64)&v24);
  if ( (int)result >= 0 && (_DWORD)result != 259 )
  {
    v13 = Irp;
    if ( Irp )
    {
      v14 = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 **)v24;
      p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)&Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&sub_1403A4B90;
      CurrentStackLocation[-1].Context = v14;
      CurrentStackLocation[-1].Control = -32;
      if ( p_Type )
      {
        _InterlockedExchange64(p_Type, (__int64)v13);
        v13 = Irp;
        v14 = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 **)v24;
      }
      v17 = p_CurrentStackLocation->CurrentStackLocation;
      if ( a2 )
      {
        v17[-1].Parameters.Create.Options = 1;
        v17[-1].Parameters.Read.ByteOffset.LowPart = v8;
        if ( (_BYTE)xmmword_140C22740 && (!v14[25] || (unsigned int)sub_1403B1794() == 1) )
        {
          v17[-1].Parameters.Create.EaLength = sub_14038BF18(
                                                 DWORD2(xmmword_140C22740),
                                                 WORD2(xmmword_140C22740) >> 12,
                                                 1);
          v17[-1].Parameters.Read.Length = DWORD1(xmmword_140C22740);
        }
        if ( (xmmword_140D06910 & 0x8000) != 0 )
          sub_1405D6E84(a1, 0LL, v13);
        v23 = v14[25];
        if ( !v23 || a2 != 2 || (unsigned __int8)sub_1403B5A24(v23, v13) )
          sub_1403A4264(v13);
      }
      else
      {
        v18 = v14[25];
        if ( v18 )
        {
          _m_prefetchw(&v18[4]);
          PacketType = v18[4].PacketType;
          do
          {
            v20 = PacketType;
            PacketType = _InterlockedCompareExchange((volatile signed __int32 *)&v18[4], PacketType, PacketType);
          }
          while ( v20 != PacketType );
          v21 = v24;
          v22 = PacketType & 1;
          *(_BYTE *)(v24 + 208) = v22;
          v22 ^= 1u;
          *(_BYTE *)(v21 + 209) = v22;
          p_CurrentStackLocation = v14[25];
          if ( v22 )
          {
            sub_1403B1230(p_CurrentStackLocation[7].CurrentStackLocation, 0LL);
          }
          else
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&p_CurrentStackLocation[30] + 1, 0xFFFFFFFF) == 1 )
              KeSetEvent((PRKEVENT)&p_CurrentStackLocation[31], 0, 0);
            v14[25] = 0LL;
          }
          v13 = Irp;
        }
        v17[-1].Parameters.Read.Length = v8;
        sub_1403A4500(p_CurrentStackLocation, v13);
        sub_1403B51A0(v17[-1].DeviceObject, v13, retaddr);
      }
      return 259LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
