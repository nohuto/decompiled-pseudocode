/*
 * XREFs of sub_14051BA00 @ 0x14051BA00
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140510B68 @ 0x140510B68 (sub_140510B68.c)
 *     sub_14051A654 @ 0x14051A654 (sub_14051A654.c)
 *     sub_14051A670 @ 0x14051A670 (sub_14051A670.c)
 *     sub_14051B030 @ 0x14051B030 (sub_14051B030.c)
 *     sub_14051B384 @ 0x14051B384 (sub_14051B384.c)
 *     sub_14051B7E4 @ 0x14051B7E4 (sub_14051B7E4.c)
 *     sub_140846E20 @ 0x140846E20 (sub_140846E20.c)
 *     sub_140908DD4 @ 0x140908DD4 (sub_140908DD4.c)
 */

__int64 __fastcall sub_14051BA00(__int128 *Src, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r14
  __int128 *v5; // rdi
  char v6; // r15
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  int v10; // eax
  __int128 *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // ebx
  _QWORD *v15; // rdi
  char v16; // si
  __int64 v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+28h] [rbp-38h] BYREF
  __int128 v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h]
  __int128 v22; // [rsp+48h] [rbp-18h] BYREF
  __int64 v23; // [rsp+58h] [rbp-8h]
  char v24; // [rsp+A0h] [rbp+40h] BYREF
  _QWORD *v25; // [rsp+A8h] [rbp+48h]

  v24 = 0;
  *a3 = 0LL;
  v25 = 0LL;
  v3 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v18 = 0LL;
  v5 = Src;
  v6 = 0;
  if ( !sub_14051A654(Src) && !sub_140510B68(v7) )
  {
    if ( byte_140C4BCBC && !byte_140C4BCBE )
      return 3221225659LL;
    if ( *v8 == 2 )
    {
      v10 = sub_14051B7E4((__int64)v8, (__int64)&v22);
      v11 = &v22;
      if ( v10 < 0 )
        v11 = v5;
      v5 = v11;
    }
    v12 = sub_140846E20(v5);
    v14 = v12;
    if ( v12 >= 0 )
    {
      v16 = 1;
      if ( *(_DWORD *)v5 == 1 && ((unsigned int)sub_14051B030((__int64)v5) > 1 || (*((_BYTE *)v5 + 4) & 1) != 0) )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4BE20, 0LL);
        v6 = 1;
        v14 = sub_14051A670(v5, &v18);
        if ( v14 < 0 )
          goto LABEL_26;
        v3 = v18;
        if ( *(__int64 *)(v18 + 24) > 1 )
          goto LABEL_26;
      }
      v15 = v25;
      if ( byte_140C4BCBC )
      {
        v21 = 0LL;
        v19 = 0LL;
        *(_QWORD *)&v20 = 4LL;
        *((_QWORD *)&v20 + 1) = v25[4];
        v14 = sub_14042A5E0(&v20, &v19);
      }
      else
      {
        v14 = sub_14051B384(v25, qword_140C4BC80, &v24);
        if ( v14 == -1073741776 && (v24 & 1) != 0 )
        {
          v14 = 0;
          sub_140908DD4(v15);
          v15 = 0LL;
          v25 = 0LL;
          v16 = 0;
        }
      }
      if ( v6 )
      {
LABEL_26:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4BE20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C4BE20);
        sub_1402AFC00((ULONG_PTR)&qword_140C4BE20);
        v3 = v18;
        v15 = v25;
      }
      if ( v14 >= 0 )
        goto LABEL_13;
      if ( v16 )
        sub_140908DD4(v15);
    }
    else if ( v12 == -1073741275 )
    {
      v15 = v25;
      v14 = 0;
LABEL_13:
      *a3 = v15;
      return (unsigned int)v14;
    }
    if ( v3 )
    {
      v17 = *(_QWORD *)(v3 + 16);
      if ( v17 )
        sub_1403B1B5C(v13, v17);
      sub_1403B1B5C(v13, v3);
    }
    return (unsigned int)v14;
  }
  return 0LL;
}
