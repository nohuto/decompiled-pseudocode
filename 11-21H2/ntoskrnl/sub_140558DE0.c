/*
 * XREFs of sub_140558DE0 @ 0x140558DE0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1409AD954 @ 0x1409AD954 (sub_1409AD954.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_140558DE0()
{
  KIRQL v0; // al
  KIRQL v1; // di
  PVOID v2; // rbx
  int v3; // esi
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  bool v6; // zf
  __int64 v7; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // rdi
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r11
  __int64 v21; // r10
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  __int64 v25; // r8
  int v26; // eax
  __int64 result; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C47230);
  qword_140C47260 = (__int64)KeGetCurrentThread();
LABEL_2:
  v1 = v0;
  while ( 1 )
  {
    v2 = qword_140C47220;
    if ( qword_140C47220 == &qword_140C47220 )
      break;
    v3 = *((_DWORD *)qword_140C47220 + 8);
    *((_DWORD *)qword_140C47220 + 8) = 0;
    if ( v3 )
    {
      KeReleaseSpinLockFromDpcLevel(&qword_140C47230);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v1 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v7 = *((_QWORD *)CurrentPrcb + 4375);
            v10 = ~(unsigned __int16)(-1LL << (v1 + 1));
            v6 = (v10 & *(_DWORD *)(v7 + 20)) == 0;
            *(_DWORD *)(v7 + 20) &= v10;
            if ( v6 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v1);
      if ( v3 <= 0 )
      {
        if ( v3 != -1 )
        {
          v12 = (unsigned int)(-1 - v3);
          do
          {
            LOBYTE(v7) = *((_BYTE *)v2 + 18);
            sub_1409AD954(*((_QWORD *)v2 + 3), 0xFFFFFFFFLL, *((_QWORD *)v2 + 5), v7);
            ObfDereferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
            --v12;
          }
          while ( v12 );
        }
        LOBYTE(v7) = *((_BYTE *)v2 + 18);
        v13 = *((_QWORD *)v2 + 3);
        if ( (_BYTE)v7 )
          v14 = *(_DWORD *)(v13 + 2476);
        else
          v14 = *(_DWORD *)(v13 + 2508);
        if ( (v14 & 0x7FFFFFFF) == 1 )
        {
          v15 = KeAcquireSpinLockRaiseToDpc(&qword_140C47230);
          if ( MEMORY[0xFFFFF78000000014] < *((_QWORD *)v2 + 6) )
          {
            --*((_DWORD *)v2 + 8);
            KeReleaseSpinLockFromDpcLevel(&qword_140C47230);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v19 = KeGetCurrentIrql();
                if ( v19 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v19 >= 2u )
                {
                  v20 = KeGetCurrentPrcb();
                  v21 = *((_QWORD *)v20 + 4375);
                  v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
                  v6 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
                  *(_DWORD *)(v21 + 20) &= v22;
                  if ( v6 )
                    sub_140418E4C((__int64)v20);
                }
              }
            }
            __writecr8(v15);
            KeDelayExecutionThread(0, 1u, (PLARGE_INTEGER)v2 + 6);
            goto LABEL_44;
          }
          KeReleaseSpinLockFromDpcLevel(&qword_140C47230);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v16 = KeGetCurrentIrql();
              if ( v16 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v16 >= 2u )
              {
                v17 = KeGetCurrentPrcb();
                v7 = *((_QWORD *)v17 + 4375);
                v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
                v6 = (v18 & *(_DWORD *)(v7 + 20)) == 0;
                *(_DWORD *)(v7 + 20) &= v18;
                if ( v6 )
                  sub_140418E4C((__int64)v17);
              }
            }
          }
          __writecr8(v15);
          LOBYTE(v7) = *((_BYTE *)v2 + 18);
          v13 = *((_QWORD *)v2 + 3);
        }
        sub_1409AD954(v13, 0xFFFFFFFFLL, *((_QWORD *)v2 + 5), v7);
        ObfDereferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
      }
      else
      {
        do
        {
          ObfReferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
          LOBYTE(v11) = *((_BYTE *)v2 + 18);
          sub_1409AD954(*((_QWORD *)v2 + 3), 1LL, *((_QWORD *)v2 + 5), v11);
          --v3;
        }
        while ( v3 );
      }
LABEL_44:
      v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C47230);
      goto LABEL_2;
    }
    v4 = *(_QWORD **)v2;
    v5 = (PVOID *)*((_QWORD *)v2 + 1);
    if ( *(PVOID *)(*(_QWORD *)v2 + 8LL) != v2 || *v5 != v2 )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    v6 = *((_BYTE *)v2 + 17) == 1;
    *((_BYTE *)v2 + 16) = 0;
    if ( v6 )
      ExFreePoolWithTag(v2, 0);
  }
  qword_140C47260 = 0LL;
  byte_140C47258 = 0;
  KeReleaseSpinLockFromDpcLevel(&qword_140C47230);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && v1 <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = *((_QWORD *)v24 + 4375);
        v26 = ~(unsigned __int16)(-1LL << (v1 + 1));
        v6 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
        *(_DWORD *)(v25 + 20) &= v26;
        if ( v6 )
          sub_140418E4C((__int64)v24);
      }
    }
  }
  result = v1;
  __writecr8(v1);
  return result;
}
