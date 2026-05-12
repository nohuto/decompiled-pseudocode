/*
 * XREFs of sub_1C0016EE0 @ 0x1C0016EE0
 * Callers:
 *     sub_1C0014FC4 @ 0x1C0014FC4 (sub_1C0014FC4.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x1C0016FE4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_1C00188AC @ 0x1C00188AC (sub_1C00188AC.c)
 *     sub_1C00AC730 @ 0x1C00AC730 (sub_1C00AC730.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C00174D0 @ 0x1C00174D0 (sub_1C00174D0.c)
 *     sub_1C00189A8 @ 0x1C00189A8 (sub_1C00189A8.c)
 *     sub_1C0018A38 @ 0x1C0018A38 (sub_1C0018A38.c)
 *     sub_1C0019498 @ 0x1C0019498 (sub_1C0019498.c)
 *     sub_1C0019680 @ 0x1C0019680 (sub_1C0019680.c)
 */

__int64 __fastcall sub_1C0016EE0(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 result; // rax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1 + 1;
  result = sub_1C00174D0(a1, a1 + 1, 0LL);
  if ( (int)result >= 0 )
  {
    v8 = sub_1C00081BC(*a1, a2);
    if ( v8 )
      goto LABEL_3;
    v10 = sub_1C00189A8(*a1, a2);
    v13 = v10;
    if ( v10 )
    {
      v8 = v10 & -(__int64)((*(_BYTE *)(v10 + 448) & 4) != 0);
      v13 = v8;
      if ( v8 )
        goto LABEL_3;
    }
    v8 = v3[6];
    v11 = *a1;
    if ( v8 )
    {
      sub_1C0019680(
        v3[6],
        *(unsigned int *)(*(_QWORD *)(v8 + 24) + 556LL),
        *(unsigned int *)(*(_QWORD *)(v8 + 24) + 552LL));
      goto LABEL_9;
    }
    result = sub_1C0019498(v11, &v13);
    if ( (int)result >= 0 )
    {
      v8 = v13;
      v3[6] = v13;
      *(_BYTE *)(v8 + 448) |= 8u;
      *(_BYTE *)(v8 + 693) = 0;
LABEL_9:
      v12 = *(_QWORD *)(v8 + 24);
      *(_DWORD *)(v8 + 96) = a2;
      *(_WORD *)(v8 + 88) = 1;
      *(_DWORD *)(v8 + 92) = 4;
      *(_WORD *)(v8 + 90) = *(_WORD *)(v12 + 56);
      sub_1C0018A38(v11, v8);
      *(_BYTE *)(a3 + 92) = 1;
LABEL_3:
      *(_QWORD *)(a3 + 8) = v8;
      v9 = *(_DWORD *)(v8 + 96);
      *(_DWORD *)(a3 + 88) = 0;
      *(_DWORD *)(a3 + 4) = v9;
      return 0LL;
    }
  }
  return result;
}
