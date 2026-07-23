/*
 * XREFs of sub_1405623A0 @ 0x1405623A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14056274C @ 0x14056274C (sub_14056274C.c)
 */

void __fastcall __noreturn sub_1405623A0(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _WORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-50h] BYREF
  int v24; // [rsp+38h] [rbp-48h]
  int v25; // [rsp+3Ch] [rbp-44h]
  __int64 v26; // [rsp+40h] [rbp-40h]
  ULONG_PTR v27; // [rsp+48h] [rbp-38h]
  __int64 v28; // [rsp+50h] [rbp-30h]
  __int64 *v29; // [rsp+58h] [rbp-28h]
  ULONG_PTR v30; // [rsp+60h] [rbp-20h]
  __int64 v31; // [rsp+68h] [rbp-18h]
  ULONG MaxDataSize[4]; // [rsp+70h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+38h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+C0h] [rbp+40h] BYREF

  BugCheckParameter2 = 0x1504E5057LL;
  v1 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)a1;
  v34 = 0LL;
  BugCheckParameter1 = 0LL;
  *(_OWORD *)MaxDataSize = 0LL;
  v26 = qword_140C4E928;
  v27 = qword_140CF5F60;
  v28 = qword_140C467C0;
  v29 = &qword_140C45FC0;
  v30 = qword_140C11650;
  v24 = *(_DWORD *)(a1 + 16);
  BugCheckParameter3 = 0LL;
  v2 = v1 / 0x2710;
  v25 = 0;
  sub_14056274C(
    a1,
    (unsigned int)&v34,
    (unsigned int)&BugCheckParameter3,
    (unsigned int)MaxDataSize,
    (__int64)&MaxDataSize[2]);
  v3 = v34;
  v31 = v34;
  if ( *(_QWORD *)MaxDataSize )
  {
    sub_1403D99B4(MaxDataSize[0], (PVOID)*(unsigned __int16 *)(*(_QWORD *)MaxDataSize + 2LL));
    v4 = *(_QWORD *)MaxDataSize;
    v5 = *(_QWORD *)(*(_QWORD *)MaxDataSize + 8LL);
    if ( v5 )
    {
      sub_1403D99B4(v5, (PVOID)(unsigned int)*(__int16 *)(v5 + 2));
      v4 = *(_QWORD *)MaxDataSize;
      v6 = (_WORD *)(*(_QWORD *)(*(_QWORD *)MaxDataSize + 8LL) + 56LL);
      if ( *v6 )
      {
        sub_1403D99B4((ULONG)v6, (PVOID)2);
        sub_1403D99B4(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)MaxDataSize + 8LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)MaxDataSize + 8LL) + 56LL));
        v4 = *(_QWORD *)MaxDataSize;
      }
    }
    if ( v4 )
    {
      v7 = *(_QWORD *)(v4 + 312);
      if ( *(_QWORD *)(v7 + 40) )
      {
        v8 = *(_QWORD *)(v7 + 40);
        sub_1403D99B4(v8, (PVOID)0x310);
        if ( *(_WORD *)(v8 + 40) )
        {
          sub_1403D99B4(v8 + 40, (PVOID)2);
          sub_1403D99B4(*(_QWORD *)(v8 + 48), (PVOID)*(unsigned __int16 *)(v8 + 40));
        }
        v9 = *(_QWORD *)MaxDataSize;
        if ( *(_QWORD *)MaxDataSize )
          v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)MaxDataSize + 312LL) + 40LL);
        else
          v10 = 0LL;
        if ( *(_WORD *)(v10 + 56) )
        {
          if ( *(_QWORD *)MaxDataSize )
            v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)MaxDataSize + 312LL) + 40LL);
          else
            LODWORD(v11) = 0;
          sub_1403D99B4(v11 + 56, (PVOID)2);
          if ( *(_QWORD *)MaxDataSize )
            v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)MaxDataSize + 312LL) + 40LL);
          else
            v12 = 0LL;
          if ( *(_QWORD *)MaxDataSize )
            v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)MaxDataSize + 312LL) + 40LL);
          else
            v13 = 0LL;
          sub_1403D99B4(*(_QWORD *)(v13 + 64), (PVOID)*(unsigned __int16 *)(v12 + 56));
          v9 = *(_QWORD *)MaxDataSize;
        }
        if ( v9 )
          v14 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
        else
          v14 = 0LL;
        if ( *(_QWORD *)(v14 + 16) )
        {
          v15 = v9 ? *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL) : 0LL;
          if ( *(_WORD *)(*(_QWORD *)(v15 + 16) + 56LL) )
          {
            if ( v9 )
              v16 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
            else
              v16 = 0LL;
            sub_1403D99B4(*(_QWORD *)(v16 + 16) + 56, (PVOID)2);
            if ( *(_QWORD *)MaxDataSize )
              v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)MaxDataSize + 312LL) + 40LL);
            else
              v17 = 0LL;
            if ( *(_QWORD *)MaxDataSize )
              v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)MaxDataSize + 312LL) + 40LL);
            else
              v18 = 0LL;
            sub_1403D99B4(
              *(_QWORD *)(*(_QWORD *)(v18 + 16) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v17 + 16) + 56LL));
          }
        }
      }
    }
  }
  if ( *(_QWORD *)&MaxDataSize[2] )
  {
    v19 = *(_QWORD *)(*(_QWORD *)&MaxDataSize[2] + 48LL) + 24LL;
  }
  else
  {
    if ( !v3 )
      goto LABEL_59;
    v19 = v3 + 56;
  }
  if ( v19 )
  {
    v20 = *(_QWORD **)(v19 + 8);
    if ( v20 )
    {
      v21 = *(unsigned __int16 *)(v19 + 2);
      if ( (_WORD)v21 )
      {
        if ( v21 < 8 )
          memmove(&BugCheckParameter1, v20, *(unsigned __int16 *)(v19 + 2));
        else
          BugCheckParameter1 = *v20;
      }
    }
    if ( v3 )
    {
      sub_1403D99B4(v3, (PVOID)0x310);
      if ( *(_WORD *)(v3 + 40) )
      {
        sub_1403D99B4(v3 + 40, (PVOID)2);
        sub_1403D99B4(*(_QWORD *)(v3 + 48), (PVOID)*(unsigned __int16 *)(v3 + 40));
      }
      if ( *(_WORD *)(v3 + 56) )
      {
        sub_1403D99B4(v3 + 56, (PVOID)2);
        sub_1403D99B4(*(_QWORD *)(v3 + 64), (PVOID)*(unsigned __int16 *)(v3 + 56));
      }
      v22 = *(_QWORD *)(v3 + 16);
      if ( v22 )
      {
        if ( *(_WORD *)(v22 + 56) )
        {
          sub_1403D99B4(v22 + 56, (PVOID)2);
          sub_1403D99B4(
            *(_QWORD *)(*(_QWORD *)(v3 + 16) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v3 + 16) + 56LL));
        }
      }
    }
  }
LABEL_59:
  KeBugCheckEx(0x1D5u, BugCheckParameter1, (ULONG_PTR)&BugCheckParameter2, BugCheckParameter3, (unsigned int)v2);
}
