/*
 * XREFs of sub_1C00352F0 @ 0x1C00352F0
 * Callers:
 *     sub_1C00378CC @ 0x1C00378CC (sub_1C00378CC.c)
 * Callees:
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     sub_1C00789EC @ 0x1C00789EC (sub_1C00789EC.c)
 *     sub_1C0078B00 @ 0x1C0078B00 (sub_1C0078B00.c)
 *     sub_1C0078C8C @ 0x1C0078C8C (sub_1C0078C8C.c)
 */

__int64 __fastcall sub_1C00352F0(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // r9d
  unsigned int v4; // r14d
  unsigned __int8 v5; // cl
  int v7; // [rsp+20h] [rbp-38h]
  void *v8; // [rsp+30h] [rbp-28h]
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF
  HANDLE v11; // [rsp+70h] [rbp+18h] BYREF

  Handle = (HANDLE)-1LL;
  v11 = (HANDLE)-1LL;
  v9 = 0LL;
  v2 = 0;
  if ( (int)sub_1C0078C8C(&v11) >= 0 )
  {
    sub_1C0010EE0(*(_QWORD *)(a1 + 16), (__int64)&v9);
    if ( (int)sub_1C00789EC(
                (int)v11,
                *(_DWORD *)(a1 + 56),
                *(_DWORD *)(a1 + 736),
                v3,
                v7,
                (__int64)&v9,
                v8,
                (__int64)&Handle) >= 0 )
    {
      v4 = *(unsigned __int8 *)(a1 + 416);
      if ( *(_BYTE *)(a1 + 416) )
      {
        do
        {
          if ( v2 >= 0xFF )
            break;
          v5 = (unsigned __int8)v2 < 8u ? *(_BYTE *)((unsigned __int8)v2 + a1 + 417) : -1;
          sub_1C0078B00(Handle, v2, v5, a1 + 8 * (v2 + 252LL));
          ++v2;
        }
        while ( v2 < v4 );
      }
    }
    if ( Handle != (HANDLE)-1LL )
      ZwClose(Handle);
  }
  if ( v11 != (HANDLE)-1LL )
    ZwClose(v11);
  return 0LL;
}
