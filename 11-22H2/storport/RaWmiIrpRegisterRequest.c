/*
 * XREFs of RaWmiIrpRegisterRequest @ 0x1C00A2A48
 * Callers:
 *     RaWmiDispatchIrp @ 0x1C00A28B4 (RaWmiDispatchIrp.c)
 * Callees:
 *     memmove @ 0x1C0023680 (memmove.c)
 *     RaWmiPassToMiniPort @ 0x1C00A2B7C (RaWmiPassToMiniPort.c)
 */

__int64 __fastcall RaWmiIrpRegisterRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // r13d
  unsigned int *v4; // rbx
  NTSTATUS v5; // r14d
  char v6; // r12
  bool v7; // si
  __int64 v9; // r8
  __int64 v10; // rax
  const void **DriverObjectExtension; // rax
  __int64 v12; // rdx
  const void **v13; // r15
  unsigned int *v14; // rsi
  unsigned __int64 v15; // rcx
  int v16; // ecx
  NTSTATUS v17; // eax
  unsigned int v18; // edi
  unsigned int v20; // r12d
  _WORD *v21; // rcx
  __int64 v22; // r11
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // r10
  unsigned __int64 i; // rcx
  unsigned int v27; // r8d
  unsigned int v28; // ecx
  __int64 v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = *(unsigned int **)(a2 + 24);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v9 = a1;
  if ( *(_DWORD *)v2 == 1094997074 )
  {
    v6 = *(_BYTE *)(v2 + 491);
    v7 = (*(_BYTE *)(v2 + 104) & 2) != 0;
  }
  else if ( *(_DWORD *)v2 == 1431193940 )
  {
    v10 = *(_QWORD *)(v2 + 24);
    v6 = *(_BYTE *)(v10 + 491);
    v7 = (*(_BYTE *)(v10 + 104) & 2) != 0;
    if ( !*(_DWORD *)(a2 + 8)
      && (*(_DWORD *)(v2 + 1872) & 1) != 0
      && (*(_BYTE *)(v2 + 450) & 8) == 0
      && *(_QWORD *)(v2 + 1888) )
    {
      v5 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v2 + 1880), 1u);
      if ( v5 < 0 )
        RtlFreeUnicodeString((PUNICODE_STRING)(v2 + 1880));
      else
        *(_BYTE *)(v2 + 450) |= 8u;
      v9 = a1;
    }
  }
  if ( *(_DWORD *)(a2 + 8) > 1u )
    return 3221225485LL;
  DriverObjectExtension = (const void **)IoGetDriverObjectExtension(*(PDRIVER_OBJECT *)(v9 + 8), DriverEntry);
  v13 = DriverObjectExtension;
  if ( DriverObjectExtension )
  {
    if ( v6 && v7 )
    {
      v14 = (unsigned int *)(a2 + 16);
      v15 = *(unsigned int *)(a2 + 16);
      v3 = *((unsigned __int16 *)DriverObjectExtension + 20) + 2;
      if ( v15 <= (unsigned __int64)v3 + 4 )
        v16 = 4;
      else
        v16 = v15 - v3;
      *v14 = v16;
      LOBYTE(v12) = 8;
      v17 = RaWmiPassToMiniPort(a1, v12, a2);
      v18 = *v14;
      v5 = v17;
    }
    else
    {
      v18 = 0;
      v14 = (unsigned int *)(a2 + 16);
    }
    if ( v5 != -1073741789 )
    {
      if ( v5 < 0 )
      {
LABEL_14:
        *v14 = v18;
        return (unsigned int)v5;
      }
      if ( v18 != 4 )
      {
        if ( v18 )
        {
          v20 = v18;
          v21 = (_WORD *)((char *)v4 + v18);
          *v21 = *((_WORD *)v13 + 20);
          memmove(v21 + 1, v13[6], *((unsigned __int16 *)v13 + 20));
          v22 = a1;
          v23 = *(_QWORD *)(a1 + 64);
          if ( *(_DWORD *)v23 != 1431193940 )
            v22 = *(_QWORD *)(v23 + 32);
          v24 = *(_QWORD *)(a2 + 24);
          v14 = (unsigned int *)(a2 + 16);
          v25 = *(unsigned int *)(a2 + 16);
          for ( i = v24 + v25; (unsigned __int64)(v4 + 6) <= i; i = v24 + *v14 )
          {
            v27 = v4[4];
            if ( !v27 || (unsigned __int64)&v4[8 * v27 - 2] > v24 + (unsigned __int64)(unsigned int)v25 )
              break;
            v28 = 0;
            v4[2] = v20;
            do
            {
              v29 = 8LL * v28;
              v30 = v4[v29 + 10];
              if ( (v30 & 0xC) != 0 )
              {
                *(_QWORD *)&v4[v29 + 12] = v22;
                v4[v29 + 10] = v30 & 0xFFFFFFD3 | 0x20;
              }
              ++v28;
            }
            while ( v28 < v4[4] );
            v31 = v4[1];
            if ( !(_DWORD)v31 )
              break;
            v20 -= v31;
            v24 = *(_QWORD *)(a2 + 24);
            v4 = (unsigned int *)((char *)v4 + v31);
            LODWORD(v25) = *v14;
          }
          v18 += v3;
          *v4 = v18;
        }
        goto LABEL_14;
      }
    }
    *v4 += v3;
    v18 = 4;
    v5 = -1073741789;
    goto LABEL_14;
  }
  return 3221225473LL;
}
