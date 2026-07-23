/*
 * XREFs of sub_140798F44 @ 0x140798F44
 * Callers:
 *     sub_1406EDD54 @ 0x1406EDD54 (sub_1406EDD54.c)
 *     sub_140798E18 @ 0x140798E18 (sub_140798E18.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140799140 @ 0x140799140 (sub_140799140.c)
 *     sub_1409EDDB0 @ 0x1409EDDB0 (sub_1409EDDB0.c)
 */

__int64 __fastcall sub_140798F44(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rdx
  _DWORD *v9; // r8
  signed __int64 v10; // rax
  signed __int64 v11; // rcx
  int v12; // ecx
  unsigned int v14; // ecx
  int v15; // [rsp+20h] [rbp-78h]
  void *v16; // [rsp+28h] [rbp-70h] BYREF
  signed __int64 v17; // [rsp+30h] [rbp-68h]
  __int64 v18; // [rsp+38h] [rbp-60h]
  __int64 v19; // [rsp+40h] [rbp-58h]
  char *v20; // [rsp+48h] [rbp-50h]
  _OWORD v21[3]; // [rsp+50h] [rbp-48h] BYREF

  v18 = a2;
  v19 = a3;
  memset(v21, 0, sizeof(v21));
  v16 = 0LL;
  if ( *(_WORD *)(a3 + 54) == 6 )
  {
    v14 = *(_DWORD *)(a2 + 84) + 1;
    *(_DWORD *)(a2 + 84) = v14;
    if ( (a1[3] & 0x10000000) != 0 || v14 > 2 )
      return 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 84) = 0;
  }
  if ( !sub_140347810((struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a2 + 24) + 1112LL)) )
    return 3221225738LL;
  sub_14030D5C0(*(_QWORD *)(a2 + 24), 0LL, (__int64)v21, v6);
  **(_DWORD **)(a2 + 136) = a1[60];
  **(_DWORD **)(a2 + 144) = a1[65];
  v7 = (unsigned int)(4 * a1[59]);
  if ( **(_DWORD **)(a2 + 64) < (unsigned int)v7 )
  {
    v15 = sub_140799140(v7, a2, *(unsigned int *)(a3 + 48), &v16);
    if ( v15 >= 0 )
    {
      memmove(v16, (const void *)a3, *(unsigned int *)(a3 + 48));
      v8 = *(volatile signed __int32 **)(a2 + 72);
      v9 = (char *)v16 + 32;
      if ( (*(_BYTE *)(a2 + 90) & 0x10) != 0 )
      {
        v20 = (char *)v16 + 32;
        LODWORD(v10) = *v8;
        do
        {
          *v9 = v10;
          v12 = v10;
          LODWORD(v10) = _InterlockedCompareExchange(v8, (signed __int32)v9, v10);
        }
        while ( (_DWORD)v10 != v12 );
        v10 = (unsigned int)v10;
      }
      else
      {
        _m_prefetchw((const void *)v8);
        v10 = *(_QWORD *)v8;
        do
        {
          *(_QWORD *)v9 = v10;
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, (signed __int64)v9, v10);
        }
        while ( v10 != v11 );
      }
      v17 = v10;
      _InterlockedIncrement(*(volatile signed __int32 **)(a2 + 64));
      if ( !v17 )
        KeSetEvent(*(PRKEVENT *)(a2 + 56), 0, 0);
    }
  }
  else
  {
    v15 = -1073741764;
  }
  sub_1402D0930((__int64)v21, 0LL);
  sub_1402AD030((struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a2 + 24) + 1112LL));
  return (unsigned int)v15;
}
