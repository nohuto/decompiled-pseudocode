/*
 * XREFs of ??$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AU?$pair@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800E69F4
 * Callers:
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800E64D4 (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 * Callees:
 *     ??$iter_swap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800E6D44 (--$iter_swap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@std@@YAXPEAUTile@.c)
 *     ??MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z @ 0x1800E721C (--MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z.c)
 */

unsigned __int64 *__fastcall std::_Unguarded_partition<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // r15
  unsigned __int64 *v5; // r12
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rcx
  bool v20; // zf
  unsigned __int64 v21; // r15
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 *result; // rax
  __int64 v27; // [rsp+68h] [rbp+10h]

  v4 = a3 - 56;
  v5 = a1;
  v7 = (__int64)((unsigned __int128)((__int64)(a3 - a2) * (__int128)0x4924924924924925LL) >> 64) >> 5;
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a3 - 56 - a2) >> 3);
  v9 = a2 + 56 * ((v7 >> 63) + v7);
  if ( v8 <= 40 )
  {
    if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v9, a2) )
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v4, v9) )
    {
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
      if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v9, a2) )
        ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    }
  }
  else
  {
    v10 = (v8 + 1) / 8;
    v11 = 56 * v10;
    v27 = 112 * v10;
    v12 = 112 * v10 + a2;
    v13 = 56 * v10 + a2;
    if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v13, a2) )
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v12, v13) )
    {
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
      if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v13, a2) )
        ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    }
    if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v9, v9 - v11) )
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v11 + v9, v9) )
    {
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
      if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v9, v9 - v11) )
        ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    }
    if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v4 - v11, v4 - v27) )
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v4, v4 - v11) )
    {
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
      if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v4 - v11, v4 - v27) )
        ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    }
    if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v9, v13) )
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v4 - v11, v9) )
    {
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
      if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v9, v13) )
        ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    }
    v5 = a1;
  }
  v14 = v9 + 56;
  if ( a2 < v9 )
  {
    do
    {
      if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v9 - 56, v9) )
        break;
      if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v9, v15) )
        break;
      v9 = v16;
    }
    while ( a2 < v16 );
  }
  while ( v14 < a3
       && !(unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v14, v9)
       && !(unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v9, v14) )
    v14 += 56LL;
  v17 = v14;
  v18 = v9;
  while ( 1 )
  {
    while ( v17 < a3 )
    {
      if ( !(unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v9, v17) )
      {
        if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v17, v9) )
          break;
        v19 = v14;
        v14 += 56LL;
        std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
          v19,
          v17);
      }
      v17 += 56LL;
    }
    v20 = v18 == a2;
    if ( v18 > a2 )
    {
      v21 = v18 - 56;
      do
      {
        if ( !(unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v21, v9) )
        {
          if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v9, v21) )
            break;
          v9 -= 56LL;
          std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
            v9,
            v22);
        }
        v18 -= 56LL;
        v21 -= 56LL;
      }
      while ( a2 < v18 );
      v20 = v18 == a2;
    }
    if ( v20 )
      break;
    v18 -= 56LL;
    if ( v17 == a3 )
    {
      v9 -= 56LL;
      if ( v18 != v9 )
        std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
          v18,
          v9);
      v14 -= 56LL;
      v24 = v9;
      v23 = v14;
    }
    else
    {
      v24 = v17;
      v23 = v18;
      v17 += 56LL;
    }
LABEL_60:
    std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
      v24,
      v23);
  }
  if ( v17 != a3 )
  {
    if ( v14 != v17 )
      std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
        v9,
        v14);
    v23 = v17;
    v14 += 56LL;
    v17 += 56LL;
    v24 = v9;
    v9 += 56LL;
    goto LABEL_60;
  }
  *v5 = v9;
  result = v5;
  v5[1] = v14;
  return result;
}
