/*
 * XREFs of sub_140647CF0 @ 0x140647CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024B6F8 @ 0x14024B6F8 (sub_14024B6F8.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140657370 @ 0x140657370 (sub_140657370.c)
 *     sub_14079FBD4 @ 0x14079FBD4 (sub_14079FBD4.c)
 */

void __fastcall __noreturn sub_140647CF0(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_Object; // r12
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int64 v13; // r8
  _BYTE *v14; // rdx
  __int64 v15; // rdi
  unsigned __int64 v16; // r10
  _QWORD *v17; // r9
  char *v18; // rcx
  char v19; // al
  __int64 v20; // r13
  unsigned int v21; // ebx
  unsigned int v22; // r14d
  unsigned int v23; // r11d
  char v24; // di
  char v25; // r8
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rdi
  bool v35; // zf
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // [rsp+30h] [rbp-39h]
  __int64 *v40; // [rsp+38h] [rbp-31h]
  _QWORD v41[2]; // [rsp+40h] [rbp-29h] BYREF
  _DWORD v42[4]; // [rsp+50h] [rbp-19h] BYREF
  __int16 Object; // [rsp+60h] [rbp-9h] BYREF
  char v44; // [rsp+62h] [rbp-7h]
  int v45; // [rsp+64h] [rbp-5h]
  _QWORD v46[11]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v47; // [rsp+D0h] [rbp+67h]
  LARGE_INTEGER Interval; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v49; // [rsp+E8h] [rbp+7Fh]

  sub_14024B6F8(a1, a2, a3);
  v40 = (__int64 *)sub_140657370();
  Interval.QuadPart = -1200000000LL - (unsigned int)sub_140363220(1) % 0x5F5E100uLL;
  if ( *(_QWORD *)(a1 + 8) == 1LL )
    sub_14079FBD4(KeGetCurrentThread());
  if ( (unsigned int)sub_140363220(1) % 0xA < 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
  }
  p_Object = *(struct _KEVENT **)a1;
  KeWaitForSingleObject(*(PVOID *)a1, Executive, 0, 0, 0LL);
  if ( (unsigned int)sub_140363220(1) % 0xA >= 5 )
  {
    KeResetEvent(p_Object);
  }
  else
  {
    Object = 0;
    v46[1] = v46;
    p_Object = (struct _KEVENT *)&Object;
    v44 = 6;
    v46[0] = v46;
    v45 = 0;
  }
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v7 = *(_QWORD *)(v6 + 32);
  v8 = sub_140363220(1);
  v9 = v8 ^ 0x6A15A217BC2A27DBLL;
  *v40 = 0LL;
  v39 = v9;
  v10 = v6 ^ v9;
  v11 = v7 ^ v9;
  v49 = ((unsigned __int8)v8 ^ 0xDB) & 1;
  while ( 1 )
  {
    if ( (v11 ^ v9) >> 47 == -1 || (v11 ^ v9) >> 47 == 0 )
    {
      sub_14042A5E0(v10 ^ v9, v11 ^ v9);
      v11 = v9 ^ *(_QWORD *)((v10 ^ v9) + 0x20);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v13 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v13 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v42[0] = 34539786;
    v42[1] = 218497804;
    v42[2] = 235143175;
    v42[3] = 134284555;
    v14 = v42;
    v15 = 16LL;
    v16 = v11 ^ v9 ^ *(_QWORD *)((v10 ^ v9) + 0x40) | 0xFFFF800000000000uLL;
    v17 = (_QWORD *)v16;
    v18 = (char *)v42;
    v47 = __ROR8__(v16, (v11 ^ v9 ^ *(_BYTE *)((v10 ^ v9) + 0x40)) & 0x3F);
    do
    {
      v19 = *v18++;
      *v14++ = v19 ^ 0xA;
      --v15;
    }
    while ( v15 );
    v20 = v47;
    v21 = 25;
    v22 = 16;
    v23 = 0;
    do
    {
      v24 = (*v17 ^ 9) & 0x3F;
      v25 = ~(unsigned __int8)*v17 & 0x3F;
      *v17 = v16 + (qword_140D06E28 ^ _byteswap_uint64(v20 ^ __ROL8__(qword_140D06CC8 ^ *v17, qword_140D06CC8))) + v23;
      v20 = (v16 + __ROL8__(__ROR8__(v23 ^ (unsigned __int64)(200 - v23), v25) ^ v20, v24)) ^ 0x58C06968;
      v26 = v22;
      do
      {
        v27 = __ROL8__(*v17, 4);
        *v17 = *((unsigned __int8 *)v42 + (v27 & 0xF)) | v27 & 0xFFFFFFFFFFFFFFF0uLL;
        --v26;
      }
      while ( v26 );
      ++v17;
      if ( ++v23 == 25 )
      {
        if ( *(_QWORD *)v16 != 0x85131481131482ELL )
        {
          *(v17 - 1) ^= *(_QWORD *)v16 ^ 0x85131481131482ELL;
          v21 += *((_DWORD *)v17 - 1);
          *(v17 - 1) ^= *(_QWORD *)v16 ^ 0x85131481131482ELL;
        }
        v22 = 1;
      }
    }
    while ( v23 < v21 );
    v9 = v39;
    v28 = *(_QWORD *)v16 ^ 0x85131481131482ELL;
    *(_BYTE *)(v16 + 3) = 17;
    *(_BYTE *)(v16 + 2) = 49;
    *(_BYTE *)(v16 + 1) = 72;
    *(_BYTE *)v16 = 46;
    sub_14042A5E0(v16, v28);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v29 = -1LL << (CurrentIrql + 1);
          v32 = *((_QWORD *)CurrentPrcb + 4375);
          v33 = ~(unsigned __int16)v29;
          v35 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
          *(_DWORD *)(v32 + 20) &= v33;
          if ( v35 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v34 = *v40;
    v35 = *v40 == 0;
    if ( *v40 > 0 )
    {
      v36 = -v34;
      *v40 = 0LL;
      v41[0] = v36;
      sub_14042A5E0(*(_QWORD *)(v36 + 24), v29);
      memset((void *)v36, 0, 0x20uLL);
      memset(v41, 0, 8uLL);
      v34 = *v40;
      v35 = *v40 == 0;
    }
    if ( v35 )
    {
      v37 = v49;
      do
      {
        if ( v37 )
          KeDelayExecutionThread(0, 0, &Interval);
        else
          KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
        v34 = *v40;
      }
      while ( !*v40 );
    }
    v38 = *(_QWORD *)(v34 + 32);
    v10 = v39 ^ v34;
    *v40 = 0LL;
    v11 = v39 ^ v38;
    if ( v49 )
      KeDelayExecutionThread(0, 0, &Interval);
    else
      KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
  }
}
