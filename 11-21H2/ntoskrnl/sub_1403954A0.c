/*
 * XREFs of sub_1403954A0 @ 0x1403954A0
 * Callers:
 *     sub_140395300 @ 0x140395300 (sub_140395300.c)
 * Callees:
 *     sub_1402A7C20 @ 0x1402A7C20 (sub_1402A7C20.c)
 *     sub_1402E40E0 @ 0x1402E40E0 (sub_1402E40E0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1403954A0(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        unsigned __int64 a6,
        unsigned int a7,
        int *a8)
{
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  unsigned int v12; // esi
  int v13; // r14d
  __int64 v14; // r15
  unsigned __int64 v15; // rcx
  unsigned __int64 v17; // r12
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  _QWORD *v20; // rsi
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  unsigned __int64 v24; // rax
  ULONG_PTR v25; // rbx
  struct _KPRCB *v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  char v31; // al
  ULONG_PTR BugCheckParameter4; // r12
  struct _KPRCB *v33; // rcx
  __int64 v34; // rdx
  int v35; // eax
  volatile signed __int64 *v36; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v37; // [rsp+38h] [rbp-40h]
  __int128 v38; // [rsp+40h] [rbp-38h]
  __int64 v39; // [rsp+50h] [rbp-28h]
  __int128 v40; // [rsp+58h] [rbp-20h]
  __int64 v41; // [rsp+68h] [rbp-10h]
  unsigned int v43; // [rsp+D0h] [rbp+58h]
  int v44; // [rsp+D8h] [rbp+60h]
  unsigned int v45; // [rsp+E0h] [rbp+68h]

  v36 = 0LL;
  v9 = (unsigned int)(a3 + a4 - 1);
  v10 = (unsigned int)(v9 + a5);
  v43 = v9;
  result = 0LL;
  v45 = v9 + a5;
  v12 = 0;
  v39 = 0LL;
  v13 = a3 - 1;
  v44 = 0;
  v14 = 0LL;
  v15 = (unsigned __int64)a7 << 8;
  v38 = 0LL;
  v37 = v15;
  BYTE3(v38) = -64;
  while ( 1 )
  {
    v17 = a6;
    v18 = (unsigned __int8)++v13;
    v19 = a2 + 32 * ((unsigned __int8)v13 + v15 + 16);
    if ( v12 <= (unsigned int)v9 || *(_QWORD *)(v19 + 24) <= a6 )
    {
      v20 = (_QWORD *)(v19 + 8);
      if ( v20 != (_QWORD *)*v20 )
      {
        do
        {
          CurrentPrcb = KeGetCurrentPrcb();
          a7 = 0;
          while ( 1 )
          {
            v22 = *((_QWORD *)CurrentPrcb + 4375);
            if ( v22 )
            {
              if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
              {
                v28 = *(_DWORD *)(v22 + 24);
                *(_DWORD *)(v22 + 24) = v28 + 1;
                if ( v28 == -1 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)v19, 0LL) )
              break;
            v29 = *((_QWORD *)CurrentPrcb + 4375);
            if ( v29 )
            {
              if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
              {
                v30 = *(_DWORD *)(v29 + 24) - 1;
                *(_DWORD *)(v29 + 24) = v30;
                if ( !v30 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
            do
              sub_1402F32E0(&a7, v18, v9, v10);
            while ( *(_QWORD *)v19 );
          }
          v36 = (volatile signed __int64 *)v19;
          do
          {
            v23 = (_QWORD *)*v20;
            if ( v20 == (_QWORD *)*v20 )
              goto LABEL_14;
            v24 = *(v23 - 1);
            v25 = (ULONG_PTR)(v23 - 4);
            if ( v24 > v17 )
            {
              *(_QWORD *)(v19 + 24) = v24;
LABEL_14:
              result = (__int64)v36;
              _InterlockedAnd64(v36, 0LL);
              v26 = KeGetCurrentPrcb();
              v27 = *((_QWORD *)v26 + 4375);
              if ( v27 )
              {
                if ( *((_BYTE *)v26 + 32) <= 1u )
                {
                  result = (unsigned int)(*(_DWORD *)(v27 + 24) - 1);
                  *(_DWORD *)(v27 + 24) = result;
                  if ( !(_DWORD)result )
                    result = sub_140418E4C(v26);
                }
              }
              goto LABEL_15;
            }
            v41 = 0LL;
            v31 = (BYTE3(v38) ^ v14) & 0x3F ^ BYTE3(v38) ^ *(_BYTE *)(v25 + 3);
            BYTE3(v38) ^= (BYTE3(v38) ^ v14) & 0x3F;
            v40 = 0LL;
            BYTE3(v40) = v31;
            _InterlockedXor((volatile signed __int32 *)v25, v40);
            BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(a2 + 8 * v14), v25);
            sub_1402E40E0(a2, v25, (unsigned __int8)v13, &v36);
            v14 = (unsigned int)(v14 + 1);
            if ( BugCheckParameter4 )
              KeBugCheckEx(0xC7u, 8uLL, 1uLL, v25, BugCheckParameter4);
            v17 = a6;
          }
          while ( (_DWORD)v14 != 64 );
          _InterlockedAnd64(v36, 0LL);
          v33 = KeGetCurrentPrcb();
          v34 = *((_QWORD *)v33 + 4375);
          if ( v34 )
          {
            if ( *((_BYTE *)v33 + 32) <= 1u )
            {
              v35 = *(_DWORD *)(v34 + 24) - 1;
              *(_DWORD *)(v34 + 24) = v35;
              if ( !v35 )
                sub_140418E4C(v33);
            }
          }
          result = sub_1402A7C20(a1, a8, a2, 0x40u);
          v14 = 0LL;
        }
        while ( v20 != (_QWORD *)*v20 );
LABEL_15:
        v9 = v43;
        v10 = v45;
      }
      v12 = ++v44;
    }
    if ( v13 == (_DWORD)v10 )
      break;
    v15 = v37;
  }
  if ( (_DWORD)v14 )
    return sub_1402A7C20(a1, a8, a2, v14);
  return result;
}
