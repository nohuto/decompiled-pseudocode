/*
 * XREFs of PoFxRegisterCoreDevice @ 0x140823860
 * Callers:
 *     sub_1403B97E8 @ 0x1403B97E8 (sub_1403B97E8.c)
 *     sub_1403B9904 @ 0x1403B9904 (sub_1403B9904.c)
 *     sub_1403CE36C @ 0x1403CE36C (sub_1403CE36C.c)
 *     sub_140AF86C4 @ 0x140AF86C4 (sub_140AF86C4.c)
 * Callees:
 *     sub_1403B9C64 @ 0x1403B9C64 (sub_1403B9C64.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140823988 @ 0x140823988 (sub_140823988.c)
 *     sub_1408245C4 @ 0x1408245C4 (sub_1408245C4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoFxRegisterCoreDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // esi
  void *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  _QWORD v11[10]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD *v12; // [rsp+B0h] [rbp+8h] BYREF

  v12 = 0LL;
  v5 = a1;
  if ( a1 && *(_DWORD *)a2 == 1 && *(_QWORD *)(a2 + 24) )
  {
    v6 = (void *)sub_1408245C4(a2 + 48);
    if ( v6 )
    {
      memset(v11, 0, sizeof(v11));
      v11[0] = *(_QWORD *)(a2 + 8);
      v11[1] = *(_QWORD *)(a2 + 16);
      v11[2] = *(_QWORD *)(a2 + 32);
      v11[6] = *(_QWORD *)(a2 + 24);
      v9 = sub_140823988(
             0,
             v5,
             (unsigned int)v11,
             (_DWORD)v6,
             *(_DWORD *)(a2 + 4),
             *(_QWORD *)(a2 + 40),
             0,
             0LL,
             (__int64)&v12);
      if ( v9 < 0 )
      {
        v12 = 0LL;
      }
      else
      {
        sub_1403B9C64(v8, v7, v12);
        v9 = 0;
      }
      ExFreePoolWithTag(v6, 0x4D584650u);
    }
    else
    {
      v9 = -1073741670;
    }
  }
  else
  {
    v9 = -1073741811;
  }
  *a3 = v12;
  return (unsigned int)v9;
}
