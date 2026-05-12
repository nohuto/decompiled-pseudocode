/*
 * XREFs of sub_1C000E18C @ 0x1C000E18C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C0014C8C @ 0x1C0014C8C (sub_1C0014C8C.c)
 *     sub_1C003EF0C @ 0x1C003EF0C (sub_1C003EF0C.c)
 *     sub_1C003F194 @ 0x1C003F194 (sub_1C003F194.c)
 */

__int64 __fastcall sub_1C000E18C(
        __int64 a1,
        __int64 a2,
        signed __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // edi
  __int64 v9; // r9
  _DWORD **v10; // r14
  _DWORD *v11; // r14
  _DWORD *v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rbp
  PDEVICE_OBJECT v16; // rcx
  __int64 v17; // rdx

  v6 = 0;
  v9 = a1;
  if ( !a1 || !a2 || !a3 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 1) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003F194(off_1C0093070->AttachedDevice, 72LL, &unk_1C0083380, a1, a2, a3);
    }
    return 3238002694LL;
  }
  v10 = *(_DWORD ***)(a1 - 16);
  if ( !v10 || (v11 = *v10) == 0LL || *v11 != 1094997074 )
  {
    v16 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 1) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v17 = 73LL;
    goto LABEL_28;
  }
  v12 = *(_DWORD **)a2;
  if ( !*(_QWORD *)a2 || *v12 != 1094997074 )
  {
    v16 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 1) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v17 = 74LL;
    v9 = a2;
LABEL_28:
    sub_1C003EF0C(v16->AttachedDevice, v17, &unk_1C0083380, v9);
    return 3238002694LL;
  }
  if ( a5 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 136), a3, 0LL) )
    {
      return (unsigned int)-1056964596;
    }
    else
    {
      v13 = -10 * a5;
      *(_QWORD *)(a2 + 144) = a4;
      v14 = a6 / 0x3E8;
      if ( a6 / 0x3E8 >= 0x20 )
      {
        if ( a6 != 1000 * v14 )
          LODWORD(v14) = v14 + 1;
      }
      else
      {
        LODWORD(v14) = 0;
      }
      if ( KeGetCurrentIrql() > 2u )
        return (unsigned int)sub_1C0014C8C(v11, a2, v13, (unsigned int)v14);
      else
        KeSetCoalescableTimer((PKTIMER)(a2 + 8), (LARGE_INTEGER)v13, 0, v14, (PKDPC)(a2 + 72));
    }
  }
  else if ( v11 == v12 && a3 == *(_QWORD *)(a2 + 136) )
  {
    _InterlockedExchange64((volatile __int64 *)(a2 + 136), 0LL);
    KeCancelTimer((PKTIMER)(a2 + 8));
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v6;
}
