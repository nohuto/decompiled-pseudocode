/*
 * XREFs of sub_14028DC40 @ 0x14028DC40
 * Callers:
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_14031BAB0 @ 0x14031BAB0 (sub_14031BAB0.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 *     sub_14031F940 @ 0x14031F940 (sub_14031F940.c)
 *     sub_140329630 @ 0x140329630 (sub_140329630.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_140337B00 @ 0x140337B00 (sub_140337B00.c)
 *     sub_140337F60 @ 0x140337F60 (sub_140337F60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14028DC40(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  signed __int64 v5; // r10
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  signed __int64 v8; // r10
  BOOL v9; // r11d
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v11; // eax
  unsigned __int64 v12; // rdx
  struct _KPRCB *v13; // r10
  __int64 v14; // r8
  bool v15; // zf
  signed __int32 v16; // eax
  __int64 *v18; // rcx
  __int64 v19; // rdi
  unsigned __int32 v20; // eax
  unsigned __int64 v21; // r8

  if ( a2 + a3 >= a2 || a3 == 0xFFFFFFFFLL )
  {
    v5 = *(_QWORD *)(a1 + 16960);
    v6 = 0LL;
    if ( v5 < 1024 && (ULONG_PTR *)a1 == &StartContext )
    {
      if ( (_DWORD)dword_140D06884 )
      {
        v18 = qword_140D088C0;
        v19 = (unsigned int)dword_140D06884;
        do
        {
          if ( *(_DWORD *)(*v18 + 34460) != -1 )
          {
            v20 = _InterlockedExchange((volatile __int32 *)(*v18 + 34460), -1);
            if ( v20 != -1 )
              v6 += v20;
          }
          ++v18;
          --v19;
        }
        while ( v19 );
      }
      if ( v6 >= a2 )
      {
        v21 = v6 - a2;
        if ( v21 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v21);
        return 3LL;
      }
      a2 -= v6;
    }
    if ( v5 <= 0 )
    {
LABEL_45:
      if ( a3 != 0xFFFFFFFFLL )
      {
LABEL_46:
        ++dword_140C52B2C;
        if ( v6 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v6);
        return 0LL;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), -(__int64)a2);
      return 3LL;
    }
    while ( 1 )
    {
      if ( a2 + a3 > v5 && a3 != 0xFFFFFFFFLL )
        goto LABEL_46;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16960), v5 - a2, v5);
      if ( v5 == v7 )
        break;
      v5 = v7;
      if ( v7 <= 0 )
        goto LABEL_45;
    }
    v8 = v5 - a2;
    v9 = v8 < 1024;
    if ( (ULONG_PTR *)a1 == &StartContext )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = *((_DWORD *)CurrentPrcb + 8615);
      if ( v11 == -1 )
      {
        if ( v8 >= 2048 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 0, -1);
          v11 = 0;
          goto LABEL_10;
        }
      }
      else if ( v11 < 0x40 && v8 > 1024 )
      {
LABEL_10:
        v12 = 128 - v11;
        if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16960), v8 - v12, v8) )
        {
          v13 = KeGetCurrentPrcb();
          v14 = *((int *)v13 + 8615);
          if ( (_DWORD)v14 != -1 )
          {
            if ( v12 + v14 <= 0x100 )
            {
              do
              {
                if ( v12 >= 0x80000 )
                  break;
                v16 = _InterlockedCompareExchange((volatile signed __int32 *)v13 + 8615, v12 + v14, v14);
                v15 = (_DWORD)v14 == v16;
                LODWORD(v14) = v16;
                if ( v15 )
                  return (unsigned int)(v9 + 2);
              }
              while ( v16 != -1 && v12 + v16 <= 0x100 );
            }
            if ( (int)v14 > 192
              && (_DWORD)v14 == _InterlockedCompareExchange((volatile signed __int32 *)v13 + 8615, 192, v14) )
            {
              v12 += (int)v14 - 192;
            }
          }
          if ( v12 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v12);
        }
      }
    }
    return (unsigned int)(v9 + 2);
  }
  ++dword_140C52B28;
  return 0LL;
}
