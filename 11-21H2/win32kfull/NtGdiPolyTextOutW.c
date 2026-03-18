/*
 * XREFs of NtGdiPolyTextOutW @ 0x1C00E31B0
 * Callers:
 *     <none>
 * Callees:
 *     GrePolyTextOutW @ 0x1C00E3570 (GrePolyTextOutW.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtGdiPolyTextOutW(HDC a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v5; // edi
  unsigned int v6; // r14d
  char *v7; // r15
  ULONG64 v8; // rdx
  unsigned int i; // ecx
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  unsigned int v12; // edx
  int v13; // edx
  unsigned int v14; // eax
  char *v15; // r12
  char *v16; // r10
  unsigned int j; // ebx
  unsigned int k; // ebx
  __int64 v19; // rax
  unsigned int v20; // ecx
  char *v21; // rdx
  __int64 v22; // rax
  char *v23; // r14
  __int64 v24; // rax
  unsigned int v25; // ecx
  char *v26; // r9
  __int64 v27; // rdx
  char *v28; // r14
  __int64 v30; // [rsp+38h] [rbp-60h]
  __int64 v31; // [rsp+38h] [rbp-60h]
  char *v32; // [rsp+48h] [rbp-50h]

  v5 = 1;
  v6 = 56 * a3;
  v7 = 0LL;
  if ( a3 > 0xB2924 )
  {
    v5 = 0;
  }
  else
  {
    if ( 56LL * a3 )
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = (ULONG64)&a2[7 * a3];
      if ( v8 > MmUserProbeAddress || v8 < (unsigned __int64)a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    for ( i = 0; i < a3; ++i )
    {
      v10 = 7LL * i;
      v11 = SLODWORD(a2[v10 + 1]);
      v12 = v6;
      v6 += 2 * v11;
      if ( v11 > 0x1388000 || v6 < v12 )
        goto LABEL_24;
      if ( a2[v10 + 6] )
      {
        v13 = 4 * v11;
        if ( (a2[v10 + 3] & 0x2000) != 0 )
        {
          if ( (unsigned int)(2 * v11) > 0x9C4000 )
            v5 = 0;
          v13 = 8 * v11;
        }
        else if ( v11 > 0x9C4000 )
        {
          v5 = 0;
        }
        v14 = v6;
        v6 += v13;
        if ( !v5 || v6 < v14 )
          goto LABEL_24;
      }
      if ( (_DWORD)v11 && !a2[7 * i + 2] )
      {
LABEL_24:
        v5 = 0;
        break;
      }
    }
  }
  if ( v5 && v6 )
  {
    if ( v6 <= 0x2710000 )
      v7 = (char *)AllocFreeTmpBuffer(v6);
    if ( v7 )
    {
      memmove(v7, a2, 56LL * a3);
      v15 = &v7[56 * a3];
      v16 = &v7[v6];
      v32 = v16;
      for ( j = 0; j < a3; ++j )
      {
        v24 = 56LL * j;
        v31 = v24;
        v25 = *(_DWORD *)&v7[v24 + 8];
        if ( v25 )
        {
          v26 = *(char **)&v7[v24 + 48];
          if ( v26 )
          {
            v27 = 4 * v25;
            if ( (*(_DWORD *)&v7[v24 + 24] & 0x2000) != 0 )
            {
              if ( v25 > 0x4E2000 )
                v5 = 0;
              v27 = 8 * v25;
            }
            else if ( v25 > 0x9C4000 )
            {
              v5 = 0;
            }
            v28 = &v15[v27];
            if ( !v5 || v28 < v15 || v28 > v16 )
            {
LABEL_60:
              v5 = 0;
              goto LABEL_61;
            }
            if ( &v26[v27] < v26 || (unsigned __int64)&v26[v27] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v15, v26, (unsigned int)v27);
            *(_QWORD *)&v7[v31 + 48] = v15;
            v15 = v28;
            v16 = v32;
          }
        }
      }
      for ( k = 0; k < a3; ++k )
      {
        v19 = 56LL * k;
        v30 = v19;
        v20 = *(_DWORD *)&v7[v19 + 8];
        if ( v20 )
        {
          v21 = *(char **)&v7[v19 + 16];
          if ( !v21 )
            goto LABEL_60;
          v22 = 2 * v20;
          v23 = &v15[v22];
          if ( v20 > 0x1388000 || v23 < v15 || v23 > v16 )
            goto LABEL_60;
          if ( &v21[v22] < v21 || (unsigned __int64)&v21[v22] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v15, v21, 2 * v20);
          *(_QWORD *)&v7[v30 + 16] = v15;
          v15 = v23;
          v16 = v32;
        }
      }
LABEL_61:
      if ( v5 )
        v5 = GrePolyTextOutW(a1);
      FreeTmpBuffer(v7);
    }
    else
    {
      return 0;
    }
  }
  return v5;
}
