/*
 * XREFs of sub_1409FC5BC @ 0x1409FC5BC
 * Callers:
 *     sub_1409FBB20 @ 0x1409FBB20 (sub_1409FBB20.c)
 *     sub_1409FBE5C @ 0x1409FBE5C (sub_1409FBE5C.c)
 *     sub_1409FE5F4 @ 0x1409FE5F4 (sub_1409FE5F4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     sub_1409FCC0C @ 0x1409FCC0C (sub_1409FCC0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall sub_1409FC5BC(_QWORD *a1, _DWORD *a2, unsigned int *a3, _QWORD *a4, _QWORD *a5, char a6)
{
  NTSTATUS result; // eax
  wchar_t *PoolWithTag; // rsi
  unsigned int v9; // edi
  int v10; // ebx
  unsigned int v11; // r10d
  unsigned int v12; // r9d
  _QWORD *v13; // rcx
  bool v14; // zf
  __int64 v15; // rdx
  _DWORD *P; // [rsp+20h] [rbp-78h]
  __int128 SystemInformation; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+50h] [rbp-48h]

  P = 0LL;
  v21 = 0LL;
  SystemInformation = 0LL;
  result = ZwQuerySystemInformation(SystemDeviceInformation, &SystemInformation, 0x18u, 0LL);
  if ( result >= 0 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x4CuLL, 0x72766E45u);
    if ( PoolWithTag )
    {
      v9 = 0;
      if ( (_DWORD)SystemInformation )
      {
        do
        {
          swprintf_s(PoolWithTag, 0x26uLL, L"\\Device\\Harddisk%lu\\Partition0", v9, P);
          v10 = sub_1409FCC0C(PoolWithTag);
          if ( v10 >= 0 )
          {
            if ( *P == (a6 == 1) && (a6 == 1 || P[2] == *(_DWORD *)a1) )
            {
              v11 = P[1];
              v12 = 0;
              if ( v11 )
              {
                v13 = P + 24;
                while ( 1 )
                {
                  if ( a6 == 1 )
                  {
                    v15 = *v13 - *a1;
                    if ( *v13 == *a1 )
                      v15 = v13[1] - a1[1];
                    v14 = v15 == 0;
                  }
                  else
                  {
                    v14 = *((_DWORD *)v13 - 6) == *a2;
                  }
                  if ( v14 )
                    break;
                  ++v12;
                  v13 += 18;
                  if ( v12 >= v11 )
                    goto LABEL_18;
                }
                *a2 = *((_DWORD *)v13 - 6);
                *a3 = v9;
                if ( a4 )
                  *a4 = *(v13 - 5);
                if ( a5 )
                  *a5 = *(v13 - 4);
                ExFreePoolWithTag(P, 0);
                goto LABEL_22;
              }
            }
LABEL_18:
            ExFreePoolWithTag(P, 0);
          }
          ++v9;
        }
        while ( v9 < (unsigned int)SystemInformation );
        if ( v10 < 0 )
          goto LABEL_22;
      }
      v10 = -1073741766;
LABEL_22:
      ExFreePoolWithTag(PoolWithTag, 0);
      return v10;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
