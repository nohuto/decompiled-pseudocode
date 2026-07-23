/*
 * XREFs of sub_140AB48B4 @ 0x140AB48B4
 * Callers:
 *     sub_140AB4770 @ 0x140AB4770 (sub_140AB4770.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_14071F640 @ 0x14071F640 (sub_14071F640.c)
 *     sub_14071F674 @ 0x14071F674 (sub_14071F674.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4A00 @ 0x140AB4A00 (sub_140AB4A00.c)
 *     sub_140AB4A4C @ 0x140AB4A4C (sub_140AB4A4C.c)
 *     sub_140AB4C18 @ 0x140AB4C18 (sub_140AB4C18.c)
 */

__int64 __fastcall sub_140AB48B4(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  ULONG_PTR v7; // rdi
  int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h]
  unsigned int v16; // [rsp+40h] [rbp-18h]
  int v17; // [rsp+44h] [rbp-14h]

  v14[1] = 0;
  v17 = 0;
  sub_140AB4370();
  v7 = *(_QWORD *)(a1 + 8);
  ExAcquirePushLockSharedEx(v7 + 48, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 56));
  v8 = sub_140AB4A00(a1, v7);
  if ( v8 >= 0 )
  {
    if ( *(_WORD *)(v7 + 66) )
    {
      v8 = -1073741637;
    }
    else
    {
      sub_14071F674(*(_QWORD *)(v7 + 32) + 72LL);
      v9 = *(_QWORD *)(v7 + 32);
      v10 = *(_DWORD *)(v9 + 280) + 4096;
      if ( *a4 >= v10 )
      {
        ExAcquirePushLockSharedEx(v9 + 1784, 0LL);
        v8 = sub_140AB4A4C(*(_QWORD *)(v7 + 32), 3);
        ExReleasePushLockEx(*(_QWORD *)(v7 + 32) + 1784LL, 0LL);
        if ( v8 >= 0 )
        {
          v13 = *(_QWORD *)(v7 + 32);
          v16 = *a4;
          v14[0] = 0;
          v15 = a3;
          v8 = sub_140AB4C18(v13, v12, v14);
          if ( v8 >= 0 )
          {
            sub_14071F640((volatile signed __int64 *)(*(_QWORD *)(v7 + 32) + 72LL));
            v8 = 0;
            goto LABEL_7;
          }
        }
      }
      else
      {
        *a4 = v10;
        v8 = -1073741789;
      }
      sub_14071F640((volatile signed __int64 *)(*(_QWORD *)(v7 + 32) + 72LL));
    }
  }
LABEL_7:
  sub_140AB4300(v7);
  sub_140AB4260();
  return (unsigned int)v8;
}
