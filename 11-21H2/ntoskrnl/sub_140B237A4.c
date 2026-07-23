/*
 * XREFs of sub_140B237A4 @ 0x140B237A4
 * Callers:
 *     sub_140B236AC @ 0x140B236AC (sub_140B236AC.c)
 * Callees:
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void sub_140B237A4()
{
  __int64 v0; // rbx
  int v1; // ecx
  int v2; // r9d
  unsigned __int64 v3; // rax
  unsigned int v4; // r8d
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // r10
  unsigned int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax

  v0 = qword_140C54958;
  v1 = 0;
  v2 = 0;
  if ( qword_140C54958 )
  {
    v3 = *(_QWORD *)(qword_140C54958 + 8);
    if ( v3 )
    {
      v4 = 0;
      v5 = 0LL;
      do
      {
        if ( *(_DWORD *)(qword_140C54958 + 24 * v5 + 32) == 4 )
        {
          v1 += *(_DWORD *)(qword_140C54958 + 24 * v5 + 24);
          ++v2;
        }
        v5 = ++v4;
      }
      while ( v4 < v3 );
      if ( v1 )
      {
        dword_140C4A780 = v1;
        v6 = 24 * v2;
        dword_140C4A660 = v2;
        qword_140C4A7C0 = sub_1403BF104(24 * v2, 1u);
        if ( !qword_140C4A7C0 )
          KeBugCheckEx(0xACu, v6, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\power\\pmsleep.c", 0x73AuLL);
        v7 = 0LL;
        v8 = 0;
        if ( *(_QWORD *)(v0 + 8) )
        {
          v9 = 0LL;
          do
          {
            if ( *(_DWORD *)(v0 + 24 * v9 + 32) == 4 )
            {
              v10 = 3 * v7;
              v11 = qword_140C4A7C0;
              *(_QWORD *)(qword_140C4A7C0 + 8 * v10) = *(_QWORD *)(v0 + 24 * v9 + 16);
              v12 = *(_DWORD *)(v0 + 24 * v9 + 24);
              *(_QWORD *)(v11 + 8 * v10 + 16) = 0LL;
              v7 = (unsigned int)(v7 + 1);
              *(_DWORD *)(v11 + 8 * v10 + 8) = v12;
            }
            v9 = ++v8;
          }
          while ( (unsigned __int64)v8 < *(_QWORD *)(v0 + 8) );
        }
      }
    }
  }
}
