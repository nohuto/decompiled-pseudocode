/*
 * XREFs of TtmNotifyDeviceInput @ 0x1409A1A20
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1409A27A8 @ 0x1409A27A8 (sub_1409A27A8.c)
 *     sub_1409A3220 @ 0x1409A3220 (sub_1409A3220.c)
 *     sub_1409A33CC @ 0x1409A33CC (sub_1409A33CC.c)
 *     sub_1409A4B90 @ 0x1409A4B90 (sub_1409A4B90.c)
 *     sub_1409A7DA4 @ 0x1409A7DA4 (sub_1409A7DA4.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

void __fastcall TtmNotifyDeviceInput(unsigned int a1, __int64 a2, int a3)
{
  char v4; // si
  char v5; // r14
  char v6; // di
  int v9; // eax
  int v10; // r9d
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r10
  int v15; // eax
  __int64 v16; // r10
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+38h] [rbp-8h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  v17 = 0LL;
  v19 = 0LL;
  v4 = 0;
  v18 = 0LL;
  v5 = 0;
  v6 = 0;
  v9 = sub_1409A4B90(&v19);
  if ( v9 < 0 )
  {
    sub_1409A8628("TtmNotifyDeviceInput", 760LL, (unsigned int)v9, 0xFFFFFFFFLL);
LABEL_3:
    v11 = v19;
    goto LABEL_4;
  }
  v11 = v19;
  if ( (*(_DWORD *)(v19 + 4) & 4) != 0 )
  {
    v12 = 768LL;
    v13 = 3221226581LL;
LABEL_9:
    sub_1409A8628("TtmNotifyDeviceInput", v12, v13, 0xFFFFFFFFLL);
    goto LABEL_4;
  }
  v4 = sub_1409A27A8(v19, a1, a2, &v17);
  if ( !v4 )
  {
    v12 = 785LL;
    v13 = 3221226021LL;
    goto LABEL_9;
  }
  v14 = v17;
  *(_QWORD *)(v17 + 608) = MEMORY[0xFFFFF78000000008];
  if ( *(_DWORD *)(v14 + 596) == -1 )
    goto LABEL_3;
  v11 = v19;
  v15 = sub_1409A3220(&v18, v19);
  if ( v15 < 0 )
  {
    v13 = (unsigned int)v15;
    v12 = 804LL;
    goto LABEL_9;
  }
  if ( (a3 & 1) != 0 )
    v6 = *(char *)(v16 + 600) < 0;
  v5 = sub_1409A33CC(v11, v18, 4, 1414809921, v6);
LABEL_4:
  LOBYTE(v10) = v4;
  sub_1409A7DA4(a1, a2, a3, v10, v5, v6);
  if ( v11 )
  {
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
  }
}
