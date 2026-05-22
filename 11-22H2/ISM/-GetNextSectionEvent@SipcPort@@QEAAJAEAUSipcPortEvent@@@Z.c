/*
 * XREFs of ?GetNextSectionEvent@SipcPort@@QEAAJAEAUSipcPortEvent@@@Z @ 0x18012887C
 * Callers:
 *     ?DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z @ 0x180127CF0 (-DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SipcPort::GetNextSectionEvent(SipcPort *this, struct SipcPortEvent *a2)
{
  SipcPort *i; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax

  if ( *((_DWORD *)this + 11) )
  {
    for ( i = (SipcPort *)*((_QWORD *)this + 2); i != (SipcPort *)((char *)this + 16); i = *(SipcPort **)i )
    {
      v4 = (__int64)i + 48;
      if ( !i )
        v4 = 56LL;
      if ( *(_BYTE *)v4 )
      {
        v5 = (__int64)i + 49;
        if ( !i )
          v5 = 57LL;
        if ( !*(_BYTE *)v5 )
        {
          *(_BYTE *)v5 = 1;
          if ( (*((_DWORD *)this + 11))-- == 1 )
            ResetEvent(*((HANDLE *)this + 1));
          v7 = (__int64)i + 16;
          if ( !i )
            v7 = 24LL;
          v8 = *(_QWORD *)v7;
          *((_QWORD *)a2 + 2) = 0LL;
          *((_QWORD *)a2 + 1) = v8;
          v9 = (__int64)i + 32;
          if ( !i )
            v9 = 40LL;
          *((_QWORD *)a2 + 3) = *(_QWORD *)v9;
          v10 = (__int64)i + 40;
          if ( !i )
            v10 = 48LL;
          *((_DWORD *)a2 + 8) = 2;
          *((_DWORD *)a2 + 9) = *(_DWORD *)v10;
          v11 = (__int64)i + 44;
          if ( !i )
            v11 = 52LL;
          *((_DWORD *)a2 + 10) = *(_DWORD *)v11;
          result = 0LL;
          *(_DWORD *)a2 = 6;
          return result;
        }
      }
    }
  }
  *(_DWORD *)a2 = 0;
  return 1LL;
}
