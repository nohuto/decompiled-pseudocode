/*
 * XREFs of sub_14062FB50 @ 0x14062FB50
 * Callers:
 *     <none>
 * Callees:
 *     sub_140281380 @ 0x140281380 (sub_140281380.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14062FB50(__int64 a1)
{
  char v2; // cl
  __int16 v3; // di
  __int64 v4; // rsi
  __int64 ThreadServerSilo; // rax
  int v6; // ecx
  __int64 v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  int v10; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]

  v10 = 0;
  v2 = **(_BYTE **)(a1 + 184);
  if ( v2 == 3 )
  {
    v3 = 268;
  }
  else
  {
    v3 = 271;
    if ( v2 != 9 )
      v3 = 269;
  }
  v4 = *(_QWORD *)(a1 + 152);
  if ( v4 )
  {
    ThreadServerSilo = PsGetThreadServerSilo(*(_QWORD *)(a1 + 152));
    v8 = a1;
    v6 = *(_DWORD *)(v4 + 1232);
  }
  else
  {
    ThreadServerSilo = 0LL;
    v8 = a1;
    v6 = -1;
  }
  v13 = 0;
  v9 = v6;
  v11 = &v8;
  v12 = 12;
  return sub_140281380(ThreadServerSilo, (int)&v11, 1, 0x400u, v3, 22026499);
}
