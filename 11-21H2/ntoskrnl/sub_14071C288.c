/*
 * XREFs of sub_14071C288 @ 0x14071C288
 * Callers:
 *     sub_14069F668 @ 0x14069F668 (sub_14069F668.c)
 *     sub_140718E30 @ 0x140718E30 (sub_140718E30.c)
 *     sub_140721910 @ 0x140721910 (sub_140721910.c)
 *     sub_1407E5F70 @ 0x1407E5F70 (sub_1407E5F70.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140719010 @ 0x140719010 (sub_140719010.c)
 *     sub_1407190AC @ 0x1407190AC (sub_1407190AC.c)
 *     sub_14071A400 @ 0x14071A400 (sub_14071A400.c)
 *     sub_14071A7F0 @ 0x14071A7F0 (sub_14071A7F0.c)
 *     sub_14071A83C @ 0x14071A83C (sub_14071A83C.c)
 *     sub_140721B0C @ 0x140721B0C (sub_140721B0C.c)
 */

void __fastcall sub_14071C288(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, __int128 *a6, __int128 *a7)
{
  __int128 *v8; // r14
  __int128 *v9; // rsi
  __int64 **v10; // rdi
  unsigned __int64 v11; // r11
  __int64 *v12; // rbx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rdx
  __int128 ***v16; // rax
  __int128 **v17; // rbx
  __int128 *v18; // rcx
  __int128 **v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 **v23; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v25; // rdx
  __int64 **v26; // rax
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v29; // r9
  int v30; // eax
  bool v31; // zf
  __int64 v32; // rax
  __int128 v33; // [rsp+20h] [rbp-20h] BYREF
  __int128 v34; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v35; // [rsp+78h] [rbp+38h]

  v35 = a4;
  v33 = 0LL;
  v34 = 0LL;
  if ( !a6 )
  {
    *((_QWORD *)&v33 + 1) = &v33;
    *(_QWORD *)&v33 = &v33;
  }
  v8 = &v33;
  if ( a6 )
    v8 = a6;
  if ( !a7 )
  {
    *((_QWORD *)&v34 + 1) = &v34;
    *(_QWORD *)&v34 = &v34;
  }
  v9 = &v34;
  if ( a7 )
    v9 = a7;
  if ( !a5 )
  {
    ExAcquireFastMutexUnsafe(&stru_140C493C0);
    a4 = v35;
  }
  v10 = (__int64 **)(a1 + 16);
  if ( *v10 == (__int64 *)v10 )
  {
    *(_DWORD *)(a1 + 48) |= 0x80000000;
    if ( !a5 )
      ExReleaseFastMutexUnsafe(&stru_140C493C0);
  }
  else
  {
    *(_DWORD *)(a1 + 48) &= ~0x80000000;
LABEL_16:
    v11 = 1LL;
    while ( 1 )
    {
      v12 = *v10;
      if ( *v10 == (__int64 *)v10 )
        break;
      v13 = *v12;
      if ( (__int64 **)v12[1] != v10 || *(__int64 **)(v13 + 8) != v12 )
        goto LABEL_58;
      *v10 = (__int64 *)v13;
      *(_QWORD *)(v13 + 8) = v10;
      if ( a4 == 267 && (v12[7] & 0x10000) == 0 )
      {
        v22 = v12[4];
        v23 = (__int64 **)v12[5];
        if ( *(__int64 **)(v22 + 8) != v12 + 4 )
          goto LABEL_58;
        if ( *v23 != v12 + 4 )
          goto LABEL_58;
        *v23 = (__int64 *)v22;
        *(_QWORD *)(v22 + 8) = v23;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(v11);
        v25 = v12[2];
        v26 = (__int64 **)v12[3];
        if ( *(__int64 **)(v25 + 8) != v12 + 2 || *v26 != v12 + 2 )
          goto LABEL_58;
        *v26 = (__int64 *)v25;
        *(_QWORD *)(v25 + 8) = v26;
        if ( dword_140D06B08 )
        {
          if ( ((unsigned __int8)dword_140D06B08 & (unsigned __int8)v11) != 0 )
          {
            v27 = KeGetCurrentIrql();
            if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v29 = *((_QWORD *)CurrentPrcb + 4375);
              v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + CurrentIrql));
              v31 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
              *(_DWORD *)(v29 + 20) &= v30;
              if ( v31 )
              {
                sub_140418E4C((__int64)CurrentPrcb);
                v11 = 1LL;
              }
              a4 = v35;
            }
          }
        }
        __writecr8(CurrentIrql);
        if ( *((_DWORD *)v12 + 14) != (_DWORD)v11 )
        {
          sub_14071A83C((__int64)v12, (__int64)v8);
          sub_1407190AC(v12);
          goto LABEL_32;
        }
      }
      else
      {
        v14 = *((_DWORD *)v12 + 14);
        if ( (v14 & 0x10000) == 0 )
        {
          v20 = v12;
          do
          {
            v21 = v20[4];
            *(_DWORD *)(v21 + 24) &= ~0x10000u;
            v20 = (__int64 *)(v21 - 32);
          }
          while ( v20 != v12 );
          *((_DWORD *)v12 + 14) |= 0x10000u;
          v14 = *((_DWORD *)v12 + 14);
        }
        if ( (unsigned __int16)v14 != (_DWORD)v11 )
        {
          sub_14071A7F0((__int64)v12, (__int64)v8);
          sub_14071A83C((__int64)v12, v15);
          v14 = *((_DWORD *)v12 + 14);
        }
        if ( (unsigned __int16)v14 == (_DWORD)v11 )
        {
          v32 = v12[8];
          *v12 = 0LL;
          *(_DWORD *)(v32 + 24) = a4;
          KeSetEvent((PRKEVENT)v12[8], 0, 0);
          goto LABEL_32;
        }
        if ( (unsigned __int16)v14 == 2 )
        {
          KeInsertQueueApc(v12[8] + 16, a4, (__int64)v12, 0);
LABEL_32:
          a4 = v35;
          goto LABEL_16;
        }
        if ( (unsigned int)(unsigned __int16)v14 - 3 <= (unsigned int)v11 )
        {
          sub_14071A400((__int64)v12);
          v16 = (__int128 ***)v12[3];
          v17 = (__int128 **)(v12 + 2);
          v18 = *v17;
          if ( *((__int128 ***)*v17 + 1) != v17
            || *v16 != v17
            || (*v16 = (__int128 **)v18, *((_QWORD *)v18 + 1) = v16, v19 = (__int128 **)*((_QWORD *)v9 + 1), *v19 != v9) )
          {
LABEL_58:
            __fastfail(3u);
          }
          *v17 = v9;
          v17[1] = (__int128 *)v19;
          *v19 = (__int128 *)v17;
          *((_QWORD *)v9 + 1) = v17;
          goto LABEL_32;
        }
      }
    }
    if ( !a5 )
      ExReleaseFastMutexUnsafe(&stru_140C493C0);
    if ( !a6 )
      sub_140721B0C(v8);
    if ( !a7 )
      sub_140719010((_QWORD **)v9);
  }
}
