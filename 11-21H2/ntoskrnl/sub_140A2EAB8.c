/*
 * XREFs of sub_140A2EAB8 @ 0x140A2EAB8
 * Callers:
 *     sub_1407881D0 @ 0x1407881D0 (sub_1407881D0.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_1407886D0 @ 0x1407886D0 (sub_1407886D0.c)
 *     sub_140788A34 @ 0x140788A34 (sub_140788A34.c)
 *     sub_140A2E04C @ 0x140A2E04C (sub_140A2E04C.c)
 *     sub_140A2EDF4 @ 0x140A2EDF4 (sub_140A2EDF4.c)
 */

__int64 __fastcall sub_140A2EAB8(__int64 *a1, _WORD *a2, void *a3, __int64 a4, unsigned int a5, unsigned int *a6)
{
  unsigned int *v6; // rdi
  __int64 v8; // rsi
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned int v14; // r15d
  __int64 *v15; // rbx
  HANDLE v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // ecx
  unsigned int v22; // r13d
  const WCHAR **v23; // r15
  HANDLE v24; // rcx
  int v25; // eax
  const WCHAR *v26; // rcx
  __int64 v27; // rax
  HANDLE v28; // r8
  const WCHAR *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // ecx
  unsigned int *v34; // [rsp+28h] [rbp-38h]
  __int64 v35; // [rsp+40h] [rbp-20h] BYREF
  __int64 v36; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle[2]; // [rsp+50h] [rbp-10h] BYREF

  v6 = a6;
  v34 = a6;
  v8 = a4;
  Handle[0] = 0LL;
  v35 = 0LL;
  v9 = 0;
  LODWORD(a6) = 0;
  v10 = a5;
  *v6 = 0;
  v11 = sub_140A2E04C((__int64)a1, (_OWORD **)&off_140C093E0, 0xEu, a4, a5, v34);
  if ( v11 >= 0 )
  {
    v13 = *v6;
    if ( (_DWORD)v13 )
    {
      if ( v12 )
        v8 = v12 + 20 * v13;
      if ( (unsigned int)v13 <= a5 )
        v10 = a5 - v13;
      else
        v10 = 0;
    }
    if ( a3 || (v11 = sub_140788A34(a1, (__int64)a2, 1, 0, (__int64)Handle, 0LL), v11 >= 0) )
    {
      v14 = 0;
      v15 = (__int64 *)off_14000AEF0;
      while ( 1 )
      {
        v16 = Handle[0];
        if ( a3 )
          v16 = a3;
        v17 = sub_1407886D0(a1, a2, v16, *v15, (__int64 (**)[3])((char *)&v35 + 4), 0LL, 0, (unsigned int *)&v35);
        if ( v17 != -1073741275 )
        {
          if ( v17 && v17 != -1073741789 )
            goto LABEL_24;
          if ( v8 && v9 < v10 )
          {
            v18 = *v15;
            v19 = v9++;
            v20 = 5 * v19;
            *(_OWORD *)(v8 + 4 * v20) = *(_OWORD *)*v15;
            *(_DWORD *)(v8 + 4 * v20 + 16) = *(_DWORD *)(v18 + 16);
          }
          v21 = *v6 + 1;
          if ( v21 < *v6 )
          {
            *v6 = 0;
LABEL_24:
            v22 = 0;
            v23 = (const WCHAR **)&off_140002870;
LABEL_25:
            LODWORD(v36) = 0;
            v24 = Handle[0];
            if ( a3 )
              v24 = a3;
            v25 = sub_14077FC64(v24, v23[2], 0LL, 0LL, (unsigned int *)&v36);
            v11 = v25;
            if ( v25 == -1073741772 )
            {
              v26 = *v23;
              if ( *((_DWORD *)*v23 + 4) != 7 )
                goto LABEL_44;
              v27 = *(_QWORD *)v26 - 0x4F7A142C8163EB01LL;
              if ( *(_QWORD *)v26 == 0x4F7A142C8163EB01LL )
                v27 = *((_QWORD *)v26 + 1) + 0x4524B8338B5D1E6CLL;
              if ( v27 )
                goto LABEL_44;
              v28 = Handle[0];
              if ( a3 )
                v28 = a3;
              if ( (int)sub_140A2EDF4(a1, a2, v28, &a6) < 0 || (_DWORD)a6 != 218103811 )
                goto LABEL_44;
            }
            else if ( v25 && v25 != -1073741789 )
            {
LABEL_45:
              if ( v11 >= 0 && a5 < *v6 )
                v11 = -1073741789;
              break;
            }
            if ( v8 && v9 < v10 )
            {
              v29 = *v23;
              v30 = v9++;
              v31 = 5 * v30;
              *(_OWORD *)(v8 + 4 * v31) = *(_OWORD *)*v23;
              *(_DWORD *)(v8 + 4 * v31 + 16) = *((_DWORD *)v29 + 4);
            }
            v32 = *v6 + 1;
            if ( v32 < *v6 )
            {
              *v6 = 0;
              v11 = -1073741675;
              break;
            }
            *v6 = v32;
LABEL_44:
            v11 = 0;
            ++v22;
            v23 += 5;
            if ( v22 >= 0x20 )
              goto LABEL_45;
            goto LABEL_25;
          }
          *v6 = v21;
        }
        ++v14;
        ++v15;
        if ( v14 >= 2 )
          goto LABEL_24;
      }
    }
    if ( Handle[0] )
      ZwClose(Handle[0]);
  }
  return (unsigned int)v11;
}
