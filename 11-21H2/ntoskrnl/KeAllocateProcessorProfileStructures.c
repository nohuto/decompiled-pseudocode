/*
 * XREFs of KeAllocateProcessorProfileStructures @ 0x1403D83A0
 * Callers:
 *     sub_140A5B400 @ 0x140A5B400 (sub_140A5B400.c)
 * Callees:
 *     sub_1403D8548 @ 0x1403D8548 (sub_1403D8548.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140829AB0 @ 0x140829AB0 (sub_140829AB0.c)
 *     sub_14082A644 @ 0x14082A644 (sub_14082A644.c)
 *     sub_14096ED20 @ 0x14096ED20 (sub_14096ED20.c)
 *     sub_140978B04 @ 0x140978B04 (sub_140978B04.c)
 */

__int64 __fastcall KeAllocateProcessorProfileStructures(unsigned int a1, __int64 a2, _QWORD *a3, char a4)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v8; // r12
  size_t v9; // rsi
  char *v10; // rbx
  _QWORD *v11; // rax
  unsigned int v12; // r14d
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  __int64 v19; // r8
  int v20; // eax
  bool v21; // zf
  __int64 v22; // r9
  unsigned __int8 v23; // cl
  struct _KPRCB *v24; // r9
  __int64 v25; // r8
  int v26; // eax
  char v29; // [rsp+78h] [rbp+20h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !a4 )
  {
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v16 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v16 + 20) |= (-1LL << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    *((_QWORD *)CurrentPrcb + 4371) = *a3;
    *((_QWORD *)CurrentPrcb + 4372) = *a3 + 40LL;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = *((_QWORD *)v18 + 4375);
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v20;
          if ( v21 )
            sub_140418E4C(v18);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 0LL;
  }
  *a3 = 0LL;
  v29 = 0;
  v8 = a1;
  v9 = a2 * a1 + 160LL * a1;
  if ( byte_140E01840 )
    v9 = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v10 = (char *)sub_140829AB0(v9, 0LL);
  if ( v10 )
  {
    memset(v10, 0, v9);
    if ( !byte_140E01840 )
      goto LABEL_33;
    if ( (unsigned int)sub_14082A644(v10, v9) )
    {
      v29 = 1;
LABEL_33:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v22 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v22 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      if ( (unsigned __int8)sub_1403D8548(KeGetCurrentPrcb()) )
      {
        v15 = *(_QWORD *)(v13 + 34968);
        if ( v15 )
        {
          *a3 = v15;
          v12 = -1073741302;
        }
        else
        {
          if ( a1 )
          {
            v11 = (_QWORD *)(v14 + 32);
            do
            {
              *v11 = v10;
              v10 += a2;
              v11 += 20;
              --v8;
            }
            while ( v8 );
          }
          v10 = 0LL;
          *a3 = v14;
          v12 = 0;
        }
      }
      else
      {
        v12 = -1073741637;
      }
      goto LABEL_15;
    }
    v12 = -1073741670;
  }
  else
  {
    v12 = -1073741801;
  }
LABEL_15:
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = *((_QWORD *)v24 + 4375);
        v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
        *(_DWORD *)(v25 + 20) &= v26;
        if ( v21 )
          sub_140418E4C(v24);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v10 )
  {
    if ( v29 )
      sub_140978B04(v10, v9);
    sub_14096ED20(v10, v9);
  }
  return v12;
}
