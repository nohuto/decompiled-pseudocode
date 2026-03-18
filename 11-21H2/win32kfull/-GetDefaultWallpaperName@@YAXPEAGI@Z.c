/*
 * XREFs of ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C021CAD8
 * Callers:
 *     LoadWallpaperFilenameFromRegistry @ 0x1C011A528 (LoadWallpaperFilenameFromRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall GetDefaultWallpaperName(char *a1, unsigned int a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  char *v6; // rcx
  __int16 v7; // ax
  __int16 v8; // ax
  char *v9; // rax
  __int64 v10; // rcx
  char *v11; // rax
  __int64 v12; // rax
  unsigned __int16 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  char *v16; // r9
  unsigned __int16 v17; // ax
  unsigned __int16 *v18; // rax
  int v19; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v19 = 0;
  RtlGetNtProductType((PNT_PRODUCT_TYPE)&v19);
  v4 = v3 - 1;
  if ( v19 == 1 )
  {
    if ( v4 <= 0x7FFFFFFE )
    {
      v5 = (unsigned int)v3;
      v6 = a1;
      do
      {
        if ( !(2147483646 - v3 + v5) )
          break;
        v7 = *(_WORD *)&v6[(char *)L"winnt" - a1];
        if ( !v7 )
          break;
        *(_WORD *)v6 = v7;
        v6 += 2;
        --v5;
      }
      while ( v5 );
LABEL_13:
      v9 = v6 - 2;
      if ( v5 )
        v9 = v6;
      *(_WORD *)v9 = 0;
      goto LABEL_18;
    }
  }
  else if ( v4 <= 0x7FFFFFFE )
  {
    v5 = v3;
    v6 = a1;
    do
    {
      if ( !(2147483646 - v3 + v5) )
        break;
      v8 = *(_WORD *)&v6[(char *)L"lanmannt" - a1];
      if ( !v8 )
        break;
      *(_WORD *)v6 = v8;
      v6 += 2;
      --v5;
    }
    while ( v5 );
    goto LABEL_13;
  }
  if ( (_DWORD)v3 )
    *(_WORD *)a1 = 0;
LABEL_18:
  if ( *(unsigned __int8 *)(gpsi + 7002LL) * (unsigned int)*(unsigned __int8 *)(gpsi + 7003LL) > 4
    && (unsigned __int64)(v3 - 1) <= 0x7FFFFFFE )
  {
    v10 = v3;
    v11 = a1;
    do
    {
      if ( !*(_WORD *)v11 )
        break;
      v11 += 2;
      --v10;
    }
    while ( v10 );
    v12 = v10 ? v3 - v10 : 0LL;
    if ( v10 )
    {
      v13 = (unsigned __int16 *)&a1[2 * v12];
      v14 = v3 - v12;
      if ( v3 != v12 )
      {
        v15 = 2147483646LL;
        v16 = (char *)((char *)L"256" - (char *)v13);
        do
        {
          if ( !v15 )
            break;
          v17 = *(unsigned __int16 *)((char *)v13 + (_QWORD)v16);
          if ( !v17 )
            break;
          *v13 = v17;
          --v15;
          ++v13;
          --v14;
        }
        while ( v14 );
      }
      v18 = v13 - 1;
      if ( v14 )
        v18 = v13;
      *v18 = 0;
    }
  }
}
