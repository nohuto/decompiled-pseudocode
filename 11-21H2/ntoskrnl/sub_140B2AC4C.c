/*
 * XREFs of sub_140B2AC4C @ 0x140B2AC4C
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_14020B830 @ 0x14020B830 (sub_14020B830.c)
 */

char __fastcall sub_140B2AC4C(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  IRP *v9; // rax
  char result; // al

  byte_140C470E0 = 42;
  LOBYTE(a2) = 42;
  qword_140C47000 = (PIRP)sub_14020B830(a1, a2);
  if ( qword_140C47000 )
  {
    dword_140C47008 = 0;
    qword_140C47020 = (__int64)&qword_140C47018;
    LOBYTE(v2) = 42;
    qword_140C47018 = (__int64)&qword_140C47018;
    word_140C47010 = 1;
    byte_140C47012 = 6;
    dword_140C47014 = 0;
    qword_140C47028 = (PIRP)sub_14020B830(v3, v2);
    if ( qword_140C47028 )
    {
      dword_140C47030 = 0;
      qword_140C47048 = (__int64)&qword_140C47040;
      LOBYTE(v4) = 42;
      qword_140C47040 = (__int64)&qword_140C47040;
      word_140C47038 = 1;
      byte_140C4703A = 6;
      dword_140C4703C = 0;
      qword_140C47050 = (PIRP)sub_14020B830(v5, v4);
      if ( qword_140C47050 )
      {
        dword_140C47058 = 0;
        stru_140C47060.Header.WaitListHead.Blink = &stru_140C47060.Header.WaitListHead;
        v8 = 0;
        stru_140C47060.Header.WaitListHead.Flink = &stru_140C47060.Header.WaitListHead;
        LOWORD(stru_140C47060.Header.Lock) = 1;
        stru_140C47060.Header.Size = 6;
        stru_140C47060.Header.SignalState = 0;
        qword_140C470D8 = 0LL;
        while ( 1 )
        {
          LOBYTE(v6) = 42;
          v9 = (IRP *)sub_14020B830(v7, v6);
          v7 = (__int64)v9;
          if ( !v9 )
            break;
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              qword_140C470A8 = v9;
            }
            else
            {
              *(_QWORD *)&v9->Type = qword_140C470D8;
              qword_140C470D8 = v9;
            }
          }
          else
          {
            Irp = v9;
          }
          if ( (unsigned int)++v8 >= 8 )
          {
            dword_140C47080 = 0;
            qword_140C470A0 = (__int64)&qword_140C47098;
            result = 1;
            qword_140C47098 = (__int64)&qword_140C47098;
            stru_140C470C0.Header.WaitListHead.Blink = &stru_140C470C0.Header.WaitListHead;
            stru_140C470C0.Header.WaitListHead.Flink = &stru_140C470C0.Header.WaitListHead;
            dword_140C470B0 = 0;
            qword_140C47088 = 0LL;
            qword_140C470B8 = 0LL;
            word_140C47090 = 1;
            byte_140C47092 = 6;
            dword_140C47094 = 0;
            LOWORD(stru_140C470C0.Header.Lock) = 1;
            stru_140C470C0.Header.Size = 6;
            stru_140C470C0.Header.SignalState = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
