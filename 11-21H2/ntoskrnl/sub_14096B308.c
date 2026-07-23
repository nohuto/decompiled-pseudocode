/*
 * XREFs of sub_14096B308 @ 0x14096B308
 * Callers:
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     PsGetProcessSessionId @ 0x14028AF60 (PsGetProcessSessionId.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_14096B308(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  __int64 v9; // rbx
  int v10; // ett
  __int64 v11; // r10
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-98h] BYREF
  __int64 v19; // [rsp+78h] [rbp-90h] BYREF
  int v20; // [rsp+80h] [rbp-88h] BYREF
  __int16 ProcessSessionId; // [rsp+84h] [rbp-84h]
  __int16 v22; // [rsp+86h] [rbp-82h]
  _UNKNOWN **v23; // [rsp+88h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+98h] [rbp-70h] BYREF
  int *v25; // [rsp+B8h] [rbp-50h]
  int v26; // [rsp+C0h] [rbp-48h]
  int v27; // [rsp+C4h] [rbp-44h]
  __int64 *v28; // [rsp+C8h] [rbp-40h]
  int v29; // [rsp+D0h] [rbp-38h]
  int v30; // [rsp+D4h] [rbp-34h]
  __int64 *v31; // [rsp+D8h] [rbp-30h]
  int v32; // [rsp+E0h] [rbp-28h]
  int v33; // [rsp+E4h] [rbp-24h]
  __int64 *v34; // [rsp+E8h] [rbp-20h]
  int v35; // [rsp+F0h] [rbp-18h]
  int v36; // [rsp+F4h] [rbp-14h]
  __int64 *v37; // [rsp+F8h] [rbp-10h]
  int v38; // [rsp+100h] [rbp-8h]
  int v39; // [rsp+104h] [rbp-4h]
  __int64 *v40; // [rsp+108h] [rbp+0h]
  int v41; // [rsp+110h] [rbp+8h]
  int v42; // [rsp+114h] [rbp+Ch]
  __int64 *v43; // [rsp+118h] [rbp+10h]
  int v44; // [rsp+120h] [rbp+18h]
  int v45; // [rsp+124h] [rbp+1Ch]
  __int64 *v46; // [rsp+128h] [rbp+20h]
  int v47; // [rsp+130h] [rbp+28h]
  int v48; // [rsp+134h] [rbp+2Ch]
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  v4 = &retaddr;
  if ( *(_QWORD *)&qword_140C53448 )
  {
    v9 = *((_QWORD *)KeGetCurrentThread() + 23);
    _m_prefetchw((const void *)(v9 + 2172));
    LODWORD(v4) = *(_DWORD *)(v9 + 2172);
    do
    {
      v10 = (int)v4;
      LODWORD(v4) = _InterlockedCompareExchange(
                      (volatile signed __int32 *)(v9 + 2172),
                      (unsigned int)v4 | 0x800,
                      (signed __int32)v4);
    }
    while ( v10 != (_DWORD)v4 );
    if ( ((unsigned __int16)v4 & 0x800) == 0 )
    {
      v20 = *(_DWORD *)(v9 + 1088);
      ProcessSessionId = PsGetProcessSessionId(v9);
      v22 = MEMORY[0xFFFFF780000002C4];
      v4 = *(_UNKNOWN ***)(v9 + 1128);
      v23 = v4;
      if ( **(_DWORD **)&qword_140C53448 > 5u )
      {
        LOBYTE(v4) = sub_1402A2000(*(__int64 *)&qword_140C53448, 0x400000000000LL);
        if ( (_BYTE)v4 )
        {
          v27 = 0;
          v30 = 0;
          v33 = 0;
          v36 = 0;
          v39 = 0;
          v42 = 0;
          v45 = 0;
          v48 = 0;
          v25 = &v20;
          v28 = &v13;
          v14 = *(_QWORD *)(v9 + 1176);
          v31 = &v14;
          v15 = *(_QWORD *)(v9 + 1168);
          v34 = &v15;
          v16 = *(_QWORD *)(v9 + 1496);
          v37 = &v16;
          v40 = &v17;
          v43 = &v18;
          v46 = &v19;
          v29 = 8;
          v32 = 8;
          v35 = 8;
          v38 = 8;
          v41 = 8;
          v44 = 8;
          v47 = 8;
          v26 = 16;
          v13 = a1;
          v17 = a2;
          v18 = a3;
          v19 = a4;
          LOBYTE(v4) = sub_14024A9B0(v11, (unsigned __int8 *)&word_14002CAA6, 0LL, 1u, 0, 0, 0xAu, &v24);
        }
      }
    }
  }
  return (char)v4;
}
