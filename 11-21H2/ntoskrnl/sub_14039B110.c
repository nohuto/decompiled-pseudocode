/*
 * XREFs of sub_14039B110 @ 0x14039B110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14039B110(__int64 a1, __int64 *a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // rbx
  unsigned int v6; // r9d
  __int64 v7; // r8
  __int64 v8; // rdi
  unsigned __int64 v9; // r11
  __int64 result; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi

  CurrentPrcb = KeGetCurrentPrcb();
  if ( *((int *)CurrentPrcb + 8456) < 2 )
  {
    v4 = *a2;
    v5 = a2[1];
  }
  else
  {
    v3 = *((_QWORD *)CurrentPrcb + 4314);
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned int)xmmword_140CF7090);
    v5 = v4 - *(_QWORD *)(v3 + 8LL * DWORD1(xmmword_140CF7090));
  }
  v6 = *((_DWORD *)a2 + 8);
  if ( v6 != -1 )
  {
    if ( v6 < 2 )
    {
LABEL_12:
      *((_QWORD *)CurrentPrcb + 4244) = v4;
      *((_QWORD *)CurrentPrcb + 4245) = v5;
      goto LABEL_8;
    }
LABEL_20:
    v6 = 1;
    goto LABEL_12;
  }
  if ( *((_BYTE *)a2 + 42) && *((int *)CurrentPrcb + 8456) < 2 )
    goto LABEL_20;
  v7 = *((unsigned __int8 *)a2 + 41);
  if ( !(_BYTE)v7 )
    goto LABEL_20;
  v8 = *((unsigned __int8 *)a2 + 40);
  if ( !(_BYTE)v8 )
    goto LABEL_20;
  v9 = v4 - *((_QWORD *)CurrentPrcb + 4244);
  v6 = *((unsigned __int8 *)CurrentPrcb + 33658);
  if ( v9 >= *((unsigned int *)a2 + 9) )
  {
    v11 = v5 - *((_QWORD *)CurrentPrcb + 4245);
    v12 = v9 * v8 / 0x64;
    if ( v11 < (unsigned int)(v9 * v7 / 0x64) && *((_BYTE *)CurrentPrcb + 33658) )
    {
      --v6;
      *((_QWORD *)CurrentPrcb + 4244) = v4;
      *((_QWORD *)CurrentPrcb + 4245) = v5;
      goto LABEL_8;
    }
    if ( v11 >= (unsigned int)v12 && v6 + 1 < 2 )
    {
      ++v6;
      *((_QWORD *)CurrentPrcb + 4244) = v4;
      *((_QWORD *)CurrentPrcb + 4245) = v5;
      goto LABEL_8;
    }
    goto LABEL_12;
  }
LABEL_8:
  result = v6;
  *((_BYTE *)CurrentPrcb + 33658) = v6;
  return result;
}
