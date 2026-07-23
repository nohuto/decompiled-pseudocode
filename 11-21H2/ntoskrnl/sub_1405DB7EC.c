/*
 * XREFs of sub_1405DB7EC @ 0x1405DB7EC
 * Callers:
 *     sub_140864680 @ 0x140864680 (sub_140864680.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_1405DB7EC()
{
  _QWORD *v0; // rdx
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rax
  unsigned int v6; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  __int64 v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v6 = 0;
  if ( byte_140C5AE30 )
  {
    if ( EtwEventEnabled(qword_140C1F580, &stru_1400395D8) )
    {
      v0 = qword_140D01518;
      if ( qword_140D01518 )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v6;
        v1 = 0LL;
        UserData.Size = 4;
        if ( *((_DWORD *)qword_140D01518 + 1) )
        {
          do
          {
            v2 = v1 + 1;
            v3 = 3 * v1;
            v6 = v2;
            v4 = WORD1(v0[v3 + 2]);
            v5 = v0[v3 + 3];
            v10 = 0;
            v8 = v5;
            v9 = v4;
            EtwWriteEx(qword_140C1F580, &stru_1400395D8, 0LL, 0, 0LL, 0LL, 2u, &UserData);
            v0 = qword_140D01518;
            v1 = v2;
          }
          while ( v2 < *((_DWORD *)qword_140D01518 + 1) );
        }
      }
    }
  }
}
