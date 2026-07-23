/*
 * XREFs of IoSteerInterrupt @ 0x140942160
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140577F94 @ 0x140577F94 (sub_140577F94.c)
 */

__int64 __fastcall IoSteerInterrupt(__int64 a1, __int64 a2)
{
  unsigned int v3; // r9d
  int v4; // r10d
  ULONG_PTR v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int16 v9; // dx
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  ULONG_PTR v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx

  v3 = -1073741823;
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( !a1 || !a2 )
    goto LABEL_62;
  if ( !*(_DWORD *)a1 )
  {
    v4 = *(_DWORD *)a2;
    if ( *(int *)a2 < 2 && (v4 != 1 || *(_QWORD *)(a2 + 16)) )
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( v5 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
        if ( v6 && (*(_DWORD *)(v6 + 396) & 0x20000) == 0 )
        {
          if ( *(_DWORD *)(a1 + 8) != 1 )
          {
            if ( *(_DWORD *)(a1 + 8) == 2 )
            {
              v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 296LL) + 112LL;
              goto LABEL_21;
            }
            if ( *(_DWORD *)(a1 + 8) == 3 )
            {
              v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
              goto LABEL_21;
            }
            if ( *(_DWORD *)(a1 + 8) != 4 )
              return (unsigned int)-1073741637;
          }
          v7 = *(_QWORD *)(a1 + 24);
LABEL_21:
          if ( *(_DWORD *)(*(_QWORD *)(v7 + 384) + 88LL) == *(_DWORD *)(v7 + 88) )
          {
            if ( v4 == 1 )
            {
              v8 = *(_QWORD *)(a2 + 16);
              v9 = *(_WORD *)(a2 + 8);
            }
            else
            {
              if ( v4 )
                return v3;
              v9 = 0;
              v8 = 0LL;
            }
            return (unsigned int)sub_140577F94(*(_QWORD *)(v7 + 384), v9, v8);
          }
LABEL_62:
          __fastfail(5u);
        }
        sub_1403D99B4(v5, (PVOID)*(unsigned __int16 *)(v5 + 2));
        v5 = *(_QWORD *)(a1 + 16);
        v11 = *(_QWORD *)(v5 + 8);
        if ( v11 )
        {
          sub_1403D99B4(v11, (PVOID)(unsigned int)*(__int16 *)(v11 + 2));
          v5 = *(_QWORD *)(a1 + 16);
          v12 = (_WORD *)(*(_QWORD *)(v5 + 8) + 56LL);
          if ( *v12 )
          {
            sub_1403D99B4((ULONG)v12, (PVOID)2);
            sub_1403D99B4(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 56LL));
            v5 = *(_QWORD *)(a1 + 16);
          }
        }
        if ( v5 )
        {
          v13 = *(_QWORD *)(v5 + 312);
          v14 = *(_QWORD *)(v13 + 40);
          if ( v14 )
          {
            v15 = *(_QWORD *)(v13 + 40);
            sub_1403D99B4(v14, (PVOID)0x310);
            if ( *(_WORD *)(v15 + 40) )
            {
              sub_1403D99B4(v15 + 40, (PVOID)2);
              sub_1403D99B4(*(_QWORD *)(v15 + 48), (PVOID)*(unsigned __int16 *)(v15 + 40));
            }
            v16 = *(_QWORD *)(a1 + 16);
            if ( v16 )
              v17 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
            else
              v17 = 0LL;
            if ( *(_WORD *)(v17 + 56) )
            {
              if ( v16 )
                v18 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
              else
                LODWORD(v18) = 0;
              sub_1403D99B4(v18 + 56, (PVOID)2);
              v19 = *(_QWORD *)(a1 + 16);
              if ( v19 )
              {
                v20 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
                v21 = v20;
              }
              else
              {
                v20 = 0LL;
                v21 = 0LL;
              }
              sub_1403D99B4(*(_QWORD *)(v21 + 64), (PVOID)*(unsigned __int16 *)(v20 + 56));
              v16 = *(_QWORD *)(a1 + 16);
            }
            if ( v16 )
              v22 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
            else
              v22 = 0LL;
            v5 = v16;
            if ( *(_QWORD *)(v22 + 16) )
            {
              v23 = v16 ? *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL) : 0LL;
              if ( *(_WORD *)(*(_QWORD *)(v23 + 16) + 56LL) )
              {
                if ( v16 )
                  v24 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
                else
                  v24 = 0LL;
                sub_1403D99B4(*(_QWORD *)(v24 + 16) + 56, (PVOID)2);
                v25 = *(_QWORD *)(a1 + 16);
                if ( v25 )
                {
                  v26 = *(_QWORD *)(*(_QWORD *)(v25 + 312) + 40LL);
                  v27 = v26;
                }
                else
                {
                  v26 = 0LL;
                  v27 = 0LL;
                }
                sub_1403D99B4(
                  *(_QWORD *)(*(_QWORD *)(v27 + 16) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v26 + 16) + 56LL));
                v5 = *(_QWORD *)(a1 + 16);
              }
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v5, 0LL, 0LL);
    }
  }
  return (unsigned int)-1073741811;
}
