/*
 * XREFs of sub_140747DDC @ 0x140747DDC
 * Callers:
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D3C18 @ 0x1402D3C18 (sub_1402D3C18.c)
 *     ExDeleteTimer @ 0x1402D3D40 (ExDeleteTimer.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14074ECA8 @ 0x14074ECA8 (sub_14074ECA8.c)
 *     sub_14074ED04 @ 0x14074ED04 (sub_14074ED04.c)
 *     sub_140950084 @ 0x140950084 (sub_140950084.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140747DDC(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rdx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  v9[0] = 0LL;
  v9[1] = a1;
  v9[2] = KeGetCurrentThread();
  v4 = sub_14074ECA8(5LL, v9);
  v5 = sub_14042A5E0(a1, a2);
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    ExDeleteTimer(*(_QWORD *)(v6 + 56), 1, 1, 0LL);
    *(_QWORD *)(v6 + 56) = 0LL;
    if ( *(int *)(v6 + 96) > 0 )
      KeWaitForSingleObject((PVOID)(v6 + 104), Executive, 0, 0, 0LL);
    ExFreePoolWithTag((PVOID)v6, 0x54645750u);
    v7 = *(unsigned int *)(v4 + 16);
    *(_QWORD *)(v4 + 8) = 0LL;
    sub_14074ED04(0LL, v7);
    if ( *(_BYTE *)(v4 + 32) )
      sub_140950084(v4, 0LL);
    sub_1402D3C18((void *)v4);
  }
  return v5;
}
