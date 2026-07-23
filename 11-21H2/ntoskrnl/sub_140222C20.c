/*
 * XREFs of sub_140222C20 @ 0x140222C20
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char sub_140222C20()
{
  unsigned __int64 v0; // r8
  unsigned __int16 v1; // r10
  unsigned __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned int v15; // r14d
  REGHANDLE v16; // r15
  __int64 v17; // rax
  unsigned int v19; // [rsp+48h] [rbp-39h] BYREF
  _DWORD v20[2]; // [rsp+50h] [rbp-31h]
  __int64 v21; // [rsp+58h] [rbp-29h]
  _DWORD v22[2]; // [rsp+68h] [rbp-19h]
  __int64 v23; // [rsp+70h] [rbp-11h] BYREF
  __int128 v24; // [rsp+78h] [rbp-9h]
  __int128 v25; // [rsp+88h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp+17h] BYREF
  __int64 *v27; // [rsp+A8h] [rbp+27h]
  __int64 v28; // [rsp+B0h] [rbp+2Fh]

  v21 = 0LL;
  if ( qword_140C24538 )
  {
    v0 = qword_140D06E48[0];
    v1 = 0;
    v20[0] = 64;
    v20[1] = 64;
    v25 = 0LL;
    v24 = 0LL;
    while ( v0 )
    {
LABEL_4:
      _BitScanForward64(&v2, v0);
      v0 &= ~(1LL << v2);
      v3 = (unsigned int)dword_140D105E0[64 * v1 + (unsigned __int8)v2];
      if ( (unsigned int)v3 >= (unsigned int)dword_140D06884 )
      {
        v4 = 0LL;
      }
      else
      {
        _mm_lfence();
        v4 = qword_140D088C0[v3];
      }
      v5 = *(unsigned __int8 *)(v4 + 34056);
      v6 = v5;
      v20[v5] = v3;
      v7 = 8 * v5;
      *(_QWORD *)((char *)&v25 + v7) += *(_QWORD *)(v4 + 34072);
      *(_QWORD *)((char *)&v24 + v7) += *(_QWORD *)(v4 + 34080);
      v8 = *(_QWORD *)(v4 + 33968);
      v9 = *(_QWORD *)(v4 + 33976);
      if ( v8 && v9 )
      {
        if ( *(_BYTE *)(v9 + 100) )
        {
          v10 = *(_DWORD *)(v9 + 116);
        }
        else
        {
          v10 = *(_DWORD *)(v9 + 72);
          v11 = *(_DWORD *)(v8 + 512);
          if ( v10 >= v11 )
            v10 = v11;
        }
      }
      else
      {
        v10 = 100;
      }
      v22[v6] = v10;
      *(_QWORD *)(v4 + 34072) = 0LL;
      *(_QWORD *)(v4 + 34080) = 0LL;
    }
    while ( ++v1 < (unsigned int)(unsigned __int16)dword_140D06E40 )
    {
      v0 = qword_140D06E48[v1];
      if ( v0 )
        goto LABEL_4;
    }
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    do
    {
      v15 = v20[v13];
      if ( v15 != 64 )
      {
        sub_14042A5E0(v12, *(_QWORD *)((char *)&v25 + v14), *(_QWORD *)((char *)&v24 + v14));
        v23 = v21;
        v19 = v12;
        if ( byte_140C5AE30 )
        {
          v16 = qword_140C1F580;
          if ( EtwEventEnabled(qword_140C1F580, &stru_14000E8E8) )
          {
            *(_QWORD *)&UserData.Size = 4LL;
            UserData.Ptr = (ULONGLONG)&v19;
            v28 = 8LL;
            v27 = &v23;
            EtwWriteEx(v16, &stru_14000E8E8, 0LL, 0, 0LL, 0LL, 2u, &UserData);
          }
        }
        v17 = sub_140348800(v15);
        *(_QWORD *)(v17 + 34064) += v21;
      }
      ++v12;
      ++v13;
      v14 += 8LL;
    }
    while ( v12 < 2 );
  }
  return 1;
}
