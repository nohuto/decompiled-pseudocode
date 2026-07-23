/*
 * XREFs of sub_1406CC024 @ 0x1406CC024
 * Callers:
 *     sub_1406822EC @ 0x1406822EC (sub_1406822EC.c)
 *     sub_1406CBFF0 @ 0x1406CBFF0 (sub_1406CBFF0.c)
 * Callees:
 *     KeIsEqualAffinityEx @ 0x140292B10 (KeIsEqualAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     sub_1402FF140 @ 0x1402FF140 (sub_1402FF140.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406CC2A0 @ 0x1406CC2A0 (sub_1406CC2A0.c)
 */

__int64 __fastcall sub_1406CC024(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  char v5; // al
  int v6; // ecx
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 result; // rax
  unsigned int v11; // ecx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 *v15; // r8
  unsigned __int8 v16; // dl
  unsigned int v17; // ecx
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  _DWORD v25[68]; // [rsp+20h] [rbp-158h] BYREF

  memset(&v25[2], 0, 0x100uLL);
  v4 = *(_QWORD *)(a1 + 1264);
  v5 = sub_1406CC2A0(16LL, a2);
  v7 = v6 - 15;
  v8 = v6 + 16;
  if ( v5 )
  {
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v6) != 0 )
    {
      if ( !v4 || (unsigned int)KeIsEmptyAffinityEx((_WORD *)(v4 + 712)) )
      {
        v14 = a1 + 712;
        v15 = (unsigned __int16 *)(a1 + 264);
      }
      else
      {
        v25[0] = 2097153;
        memset(&v25[1], 0, 0x104uLL);
        sub_1402FF140((unsigned __int16 *)(v4 + 712), (unsigned __int16 *)(a1 + 264), v25, 0x20u);
        if ( !(unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)(a1 + 264), (unsigned __int16 *)v25)
          || (unsigned int)KeIsEmptyAffinityEx(v25) )
        {
          v14 = a1 + 712;
          v15 = (unsigned __int16 *)(v4 + 712);
        }
        else
        {
          v14 = a1 + 712;
          v15 = (unsigned __int16 *)v25;
        }
      }
    }
    else
    {
      v14 = a1 + 712;
      if ( !v4 )
      {
        *(_DWORD *)(a1 + 716) = 0;
        *(_DWORD *)v14 = 2097153;
        memset((void *)(a1 + 720), 0, 0x100uLL);
        goto LABEL_2;
      }
      v15 = (unsigned __int16 *)(v4 + 712);
    }
    sub_140300030(v14, *(_WORD *)(v14 + 2), v15);
  }
LABEL_2:
  if ( (unsigned __int8)sub_1406CC2A0(v8, a2) )
  {
    if ( v4 )
      v16 = *(_BYTE *)(v4 + 1064);
    else
      v16 = 0;
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v8) != 0
      && *((_BYTE *)&dword_140A37E04 + v16) >= *((_BYTE *)&dword_140A37E04 + *(unsigned __int8 *)(a1 + 1065)) )
    {
      v16 = *(_BYTE *)(a1 + 1065);
    }
    *(_BYTE *)(a1 + 1064) = v16;
  }
  if ( (unsigned __int8)sub_1406CC2A0(128LL, a2) )
  {
    if ( v4 )
      v17 = *(_DWORD *)(v4 + 1044);
    else
      v17 = 10;
    if ( (*(_DWORD *)(a1 + 256) & 0x80u) == 0 || (v22 = *(_DWORD *)(a1 + 580), v22 >= v17) )
      *(_DWORD *)(a1 + 1044) = v17;
    else
      *(_DWORD *)(a1 + 1044) = v22;
  }
  if ( (unsigned __int8)sub_1406CC2A0(v7, v9) )
  {
    if ( v4 )
    {
      v18 = *(_QWORD *)(v4 + 984);
      v19 = *(_QWORD *)(v4 + 992);
    }
    else
    {
      v18 = 0LL;
      v19 = 0LL;
    }
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v7) == 0
      || (v23 = *(_QWORD *)(a1 + 248), v23 >= v19) && v19 )
    {
      *(_QWORD *)(a1 + 992) = v19;
      *(_QWORD *)(a1 + 984) = v18;
    }
    else
    {
      *(_QWORD *)(a1 + 992) = v23;
      *(_QWORD *)(a1 + 984) = *(_QWORD *)(a1 + 240);
    }
  }
  if ( (unsigned __int8)sub_1406CC2A0(256LL, a2) )
  {
    if ( v4 )
    {
      v12 = *(_QWORD *)(v4 + 1000);
      v13 = *(_QWORD *)(v4 + 1008);
    }
    else
    {
      v12 = 0LL;
      v13 = 0LL;
    }
    if ( (*(_DWORD *)(a1 + 256) & 0x100) == 0 || (v21 = *(_QWORD *)(a1 + 672), v21 >= v12) && v12 )
    {
      *(_QWORD *)(a1 + 1000) = v12;
      *(_QWORD *)(a1 + 1008) = v13;
    }
    else
    {
      *(_QWORD *)(a1 + 1000) = v21;
      *(_QWORD *)(a1 + 1008) = a1;
    }
  }
  result = sub_1406CC2A0(2LL, a2);
  if ( (_BYTE)result )
  {
    if ( v4 )
    {
      result = *(_QWORD *)(v4 + 976);
      v20 = *(_QWORD *)(v4 + 1016);
    }
    else
    {
      result = 0LL;
      v20 = 0LL;
    }
    if ( (*(_DWORD *)(a1 + 256) & 2) == 0 || (v24 = *(_QWORD *)(a1 + 224), v24 >= result) && result )
    {
      *(_QWORD *)(a1 + 976) = result;
      *(_QWORD *)(a1 + 1016) = v20;
    }
    else
    {
      *(_QWORD *)(a1 + 976) = v24;
      *(_QWORD *)(a1 + 1016) = a1;
    }
  }
  v11 = *(_DWORD *)(a1 + 256);
  *(_DWORD *)(a1 + 1040) = v11;
  if ( v4 )
  {
    result = v11 | *(_DWORD *)(v4 + 1040);
    *(_DWORD *)(a1 + 1040) = result;
  }
  return result;
}
