/*
 * XREFs of MiLogNotifyPageHeat @ 0x14065447C
 * Callers:
 *     MiNotifyPageHeat @ 0x140654B4C (MiNotifyPageHeat.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

char MiLogNotifyPageHeat()
{
  _UNKNOWN **v0; // rax
  _DWORD *v1; // r9
  unsigned __int64 *v2; // rsi
  __int64 v3; // r11
  _QWORD *v4; // rdx
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned __int64 v15; // rcx
  unsigned __int8 *v16; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v17; // rax
  __int64 v18; // r9
  __int64 v19; // r11
  unsigned __int64 v20; // rcx
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  int v27; // [rsp+28h] [rbp-E0h]
  int v28; // [rsp+30h] [rbp-D8h]
  int v29; // [rsp+48h] [rbp-C0h] BYREF
  int v30; // [rsp+4Ch] [rbp-BCh] BYREF
  int v31; // [rsp+50h] [rbp-B8h] BYREF
  int v32; // [rsp+54h] [rbp-B4h] BYREF
  int v33; // [rsp+58h] [rbp-B0h] BYREF
  int v34; // [rsp+5Ch] [rbp-ACh] BYREF
  int v35; // [rsp+60h] [rbp-A8h] BYREF
  int v36; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v38; // [rsp+70h] [rbp-98h] BYREF
  __int64 v39; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v40; // [rsp+80h] [rbp-88h] BYREF
  __int64 v41[17]; // [rsp+88h] [rbp-80h] BYREF
  int v42; // [rsp+110h] [rbp+8h]
  int v43; // [rsp+114h] [rbp+Ch]
  char v44; // [rsp+118h] [rbp+10h] BYREF
  int *v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  __int64 *v47; // [rsp+148h] [rbp+40h]
  __int64 v48; // [rsp+150h] [rbp+48h]
  unsigned __int64 *v49; // [rsp+158h] [rbp+50h]
  __int64 v50; // [rsp+160h] [rbp+58h]
  int *v51; // [rsp+168h] [rbp+60h]
  __int64 v52; // [rsp+170h] [rbp+68h]
  int *v53; // [rsp+178h] [rbp+70h]
  __int64 v54; // [rsp+180h] [rbp+78h]
  int *v55; // [rsp+188h] [rbp+80h]
  __int64 v56; // [rsp+190h] [rbp+88h]
  unsigned __int64 *v57; // [rsp+198h] [rbp+90h]
  int v58; // [rsp+1A0h] [rbp+98h]
  int v59; // [rsp+1A4h] [rbp+9Ch]
  _UNKNOWN *retaddr; // [rsp+1D0h] [rbp+C8h] BYREF

  v0 = &retaddr;
  if ( !*(_QWORD *)&qword_140C698E8 )
    return (char)v0;
  if ( !**(_DWORD **)&qword_140C698E8 )
    return (char)v0;
  LOBYTE(v0) = tlgKeywordOn(*(__int64 *)&qword_140C698E8, 64LL);
  if ( !(_BYTE)v0 )
    return (char)v0;
  v2 = (unsigned __int64 *)(v1 + 4);
  v3 = 0LL;
  v4 = v1 + 4;
  v5 = (unsigned __int64)&v1[2 * v1[1] + 4];
  if ( (unsigned __int64)(v1 + 4) < v5 )
  {
    do
    {
      v6 = (*v4 & 0x3FFLL) + 1;
      v7 = (*v4 >> 10) & 3LL;
      if ( ((*v4 >> 10) & 3) != 0 )
      {
        do
        {
          v6 <<= 9;
          LODWORD(v7) = v7 - 1;
        }
        while ( (_DWORD)v7 );
      }
      v3 += v6;
      ++v4;
    }
    while ( (unsigned __int64)v4 < v5 );
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v10) = 0x8000;
    else
      v10 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v10;
  }
  if ( *v1 )
  {
    if ( **(_DWORD **)&qword_140C698E8 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140C698E8, 64LL) )
      goto LABEL_23;
    v20 = *v2;
    v16 = (unsigned __int8 *)&byte_1400396CF;
    v34 = *(_DWORD *)(v18 + 4);
    v45 = &v34;
    v47 = &v39;
    v40 = v20 >> 12;
    v49 = &v40;
    v46 = 4LL;
    v35 = (v20 & 0x3FF) + 1;
    v36 = (v20 >> 10) & 3;
    v51 = &v35;
    v39 = v19;
    v53 = &v36;
    LOWORD(v30) = *(_WORD *)(v18 + 4);
    v58 = 8 * (unsigned __int16)v30;
    v17 = (struct _EVENT_DATA_DESCRIPTOR *)&v44;
    v48 = 8LL;
    v50 = 8LL;
    v52 = 4LL;
    v54 = 4LL;
    v55 = &v30;
    v56 = 2LL;
    v57 = v2;
    v59 = 0;
  }
  else
  {
    if ( **(_DWORD **)&qword_140C698E8 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140C698E8, 64LL) )
      goto LABEL_23;
    v15 = *v2;
    v16 = (unsigned __int8 *)&unk_140039648;
    v31 = *(_DWORD *)(v12 + 4);
    v41[4] = (__int64)&v31;
    v41[6] = (__int64)&v37;
    v38 = v15 >> 12;
    v41[8] = (__int64)&v38;
    v41[5] = 4LL;
    v32 = (v15 & 0x3FF) + 1;
    v33 = (v15 >> 10) & 3;
    v41[10] = (__int64)&v32;
    v37 = v14;
    v41[12] = (__int64)&v33;
    LOWORD(v29) = *(_WORD *)(v12 + 4);
    v42 = 8 * (unsigned __int16)v29;
    v17 = (struct _EVENT_DATA_DESCRIPTOR *)v41;
    v41[7] = 8LL;
    v41[9] = 8LL;
    v41[11] = 4LL;
    v41[13] = 4LL;
    v41[14] = (__int64)&v29;
    v41[15] = 2LL;
    v41[16] = (__int64)v2;
    v43 = 0;
  }
  tlgWriteEx_EtwWriteEx(v13, v16, v11, 1u, v27, v28, 9u, v17);
LABEL_23:
  if ( (_DWORD)KiIrqlFlags )
  {
    v21 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v23 = CurrentPrcb->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v25 = (v24 & v23[5]) == 0;
      v23[5] &= v24;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  LOBYTE(v0) = CurrentIrql;
  __writecr8(CurrentIrql);
  return (char)v0;
}
