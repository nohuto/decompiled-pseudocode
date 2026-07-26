/*
 * XREFs of ?UpdateBucketSchema@Bucketizer@@QEAAX_K@Z @ 0x1C0031FC0
 * Callers:
 *     ndisDmaTelemetryUpdateBucketSchema @ 0x1C0031F28 (ndisDmaTelemetryUpdateBucketSchema.c)
 * Callees:
 *     <none>
 */

void __fastcall Bucketizer::UpdateBucketSchema(Bucketizer *this, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int8 v3; // cl
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // rdx

  v2 = 0LL;
  qword_1C00EE320[0] = a2;
  v3 = 0;
  v4 = a2;
  byte_1C00EE528 = 0;
  v5 = 32LL;
  v6 = 32LL;
  v7 = 1LL;
  v8 = 50LL;
  do
  {
    if ( (v4 & v7) != 0 )
    {
      qword_1C00EE320[v3 + 1] = v8;
      v4 = qword_1C00EE320[0];
      v3 = ++byte_1C00EE528;
    }
    v7 *= 2LL;
    v8 += 50LL;
    --v6;
  }
  while ( v6 );
  if ( v3 )
    v2 = qword_1C00EE320[v3];
  v9 = v2 + 1000;
  v10 = 0x100000000LL;
  do
  {
    if ( (v4 & v10) != 0 )
    {
      qword_1C00EE320[v3 + 1] = v9;
      v4 = qword_1C00EE320[0];
      v3 = ++byte_1C00EE528;
    }
    v10 *= 2LL;
    v9 += 1000LL;
    --v5;
  }
  while ( v5 );
}
